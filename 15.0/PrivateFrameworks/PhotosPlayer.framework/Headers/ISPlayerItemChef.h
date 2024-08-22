// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISPLAYERITEMCHEF_H
#define ISPLAYERITEMCHEF_H

@class NSOperationQueue, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ISPlayerItemChef : NSObject

@property (nonatomic, setter=_setCurrentRequestID:) NSInteger _currentRequestID; // ivar: __currentRequestID
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_isolationQueue; // ivar: __isolationQueue
@property (readonly, nonatomic) NSOperationQueue *_operationQueue; // ivar: __operationQueue
@property (readonly, nonatomic) NSMutableDictionary *_operationsByRequestID; // ivar: __operationsByRequestID


+(id)defaultChef;
-(NSInteger)prepareIrisPlayerItemWithAsset:(id)arg0 trimmedTimeRange:(struct ? )arg1 photoTime:(struct ? )arg2 includeVideo:(BOOL)arg3 includeAudio:(BOOL)arg4 completion:(id)arg5 ;
-(NSInteger)prepareIrisVideoWithAsset:(id)arg0 photoTime:(struct ? )arg1 trimmedTimeRange:(struct ? )arg2 completion:(id)arg3 ;
-(id)init;
-(void)cancelPreparationOfIrisAssetWithRequestID:(NSInteger)arg0 ;


@end


#endif