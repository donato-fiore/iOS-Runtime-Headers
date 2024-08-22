// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIMODELLOADER_H
#define HMIMODELLOADER_H

@class HMFObject, NSString, NSMutableSet;
@protocol HMFLogging, OS_dispatch_queue;



@interface HMIModelLoader : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *pendingUpdates; // ivar: _pendingUpdates
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)assetDirectoryPath;
+(id)logCategory;
+(id)sharedInstance;
-(BOOL)unpackageModelAssets:(id)arg0 intoDirectory:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)unpackageModelAssetsAtPath:(id)arg0 error:(*id)arg1 ;


@end


#endif