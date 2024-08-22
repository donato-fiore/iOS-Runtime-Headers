// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMEDIAOBJECTEXPORTMANAGER_H
#define CKMEDIAOBJECTEXPORTMANAGER_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface CKMediaObjectExportManager : NSObject

@property (nonatomic) BOOL ignoreSyndicationIdentifiers; // ivar: _ignoreSyndicationIdentifiers
@property (retain, nonatomic) NSString *metricsSource; // ivar: _metricsSource
@property (retain, nonatomic) NSArray *queuedMediaObjects; // ivar: _queuedMediaObjects
@property (nonatomic) BOOL queuedMediaObjectsArePhotosCompatible; // ivar: _queuedMediaObjectsArePhotosCompatible


+(id)_serialBackgroundQueue;
-(id)_phAssetCreationRequestForMediaObject:(id)arg0 withSyndicationIdentifier:(id)arg1 ;
-(id)initWithMediaObject:(id)arg0 ;
-(id)initWithMediaObjects:(id)arg0 ;
-(void)dequeueMediaObject:(id)arg0 ;
-(void)exportMediaObject:(id)arg0 completion:(id)arg1 ;
-(void)exportMediaObject:(id)arg0 withFileName:(id)arg1 completion:(id)arg2 ;
-(void)exportMediaObjects:(id)arg0 completion:(id)arg1 ;
-(void)exportMediaObjects:(id)arg0 withFileNames:(id)arg1 completion:(id)arg2 ;
-(void)exportQueuedMediaObjectsWithCompletion:(id)arg0 ;
-(void)queueMediaObject:(id)arg0 ;


@end


#endif