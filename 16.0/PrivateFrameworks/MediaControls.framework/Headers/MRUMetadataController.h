// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUMETADATACONTROLLER_H
#define MRUMETADATACONTROLLER_H

@class NSString, NSHashTable;
@protocol MRUMetadataDataSourceDelegate, MRUMetadataDataSource;

#import <Foundation/Foundation.h>

#import "MRUArtwork.h"
#import "MRUNowPlayingInfo.h"
#import "MRUTimeControls.h"
#import "MRUTransportControls.h"

@interface MRUMetadataController : NSObject <MRUMetadataDataSourceDelegate>



@property (readonly, nonatomic) MRUArtwork *artwork;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSObject<MRUMetadataDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MRUNowPlayingInfo *nowPlayingInfo;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;
@property (readonly, nonatomic) MRUTimeControls *timeControls;
@property (readonly, nonatomic) MRUTransportControls *transportControls;


-(id)initWithDataSource:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)metadataDataSource:(id)arg0 didChangeArtwork:(id)arg1 ;
-(void)metadataDataSource:(id)arg0 didChangeBundleID:(id)arg1 ;
-(void)metadataDataSource:(id)arg0 didChangeNowPlayingInfo:(id)arg1 ;
-(void)metadataDataSource:(id)arg0 didChangeTimeControls:(id)arg1 ;
-(void)metadataDataSource:(id)arg0 didChangeTransportControls:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)representsLongFormVideoContentWithCompletion:(id)arg0 ;


@end


#endif