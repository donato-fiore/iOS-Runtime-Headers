// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMTRANSIENTIMAGEMANAGER_H
#define CAMTRANSIENTIMAGEMANAGER_H

@class NSMutableDictionary, NSString;
@protocol PUTransientImageManager;

#import <Foundation/Foundation.h>


@interface CAMTransientImageManager : NSObject <PUTransientImageManager>



@property (readonly, nonatomic) NSMutableDictionary *_activeRequestsByPairedUUID; // ivar: __activeRequestsByPairedUUID
@property (readonly, nonatomic) NSMutableDictionary *_pairedVideosByPairedUUID; // ivar: __pairedVideosByPairedUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)existingPairedVideoForUUID:(id)arg0 ;
-(id)existingPairedVideoUUIDs;
-(id)init;
-(id)insertPairedVideoWithConvertible:(id)arg0 filterType:(NSInteger)arg1 ;
-(void)_handleRequestTimeout:(id)arg0 ;
-(void)removePairedVideoForUUID:(id)arg0 ;
-(void)requestPairedVideoURLForUUID:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif