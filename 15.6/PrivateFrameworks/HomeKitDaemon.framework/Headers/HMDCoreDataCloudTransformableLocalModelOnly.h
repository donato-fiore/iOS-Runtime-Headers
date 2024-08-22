// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCOREDATACLOUDTRANSFORMABLELOCALMODELONLY_H
#define HMDCOREDATACLOUDTRANSFORMABLELOCALMODELONLY_H

@class NSString;
@protocol HMFLogging, HMDCoreDataCloudTransformable;

#import <Foundation/Foundation.h>


@interface HMDCoreDataCloudTransformableLocalModelOnly : NSObject <HMFLogging, HMDCoreDataCloudTransformable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)exportDeleteWithObjectID:(id)arg0 modelID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(BOOL)exportInsertWithObjectID:(id)arg0 additionalUpdates:(id)arg1 context:(id)arg2 ;
+(BOOL)exportUpdateWithObjectID:(id)arg0 updatedProperties:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(BOOL)importDeleteWithObjectID:(id)arg0 modelID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(BOOL)importInsertWithObjectID:(id)arg0 additionalUpdates:(id)arg1 context:(id)arg2 ;
+(BOOL)importUpdateWithObjectID:(id)arg0 updatedProperties:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(id)createWithLocalModel:(id)arg0 context:(id)arg1 ;
+(id)fetchWithLocalModel:(id)arg0 context:(id)arg1 ;
+(id)logCategory;
+(id)new;
+(void)addToUpdates:(id)arg0 objectID:(id)arg1 properties:(id)arg2 ;
-(id)createLocalModelWithContext:(id)arg0 ;
-(id)fetchLocalModelWithContext:(id)arg0 ;
-(id)init;


@end


#endif