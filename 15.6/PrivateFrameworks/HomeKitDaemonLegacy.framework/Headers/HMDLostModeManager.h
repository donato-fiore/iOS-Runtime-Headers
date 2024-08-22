// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDLOSTMODEMANAGER_H
#define HMDLOSTMODEMANAGER_H

@class HMFObject, NSString;
@protocol HMFLogging, HMFLocking;



@interface HMDLostModeManager : HMFObject <HMFLogging>

 {
    id<HMFLocking> *_lock;
    BOOL _lost;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isLost) BOOL lost;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)sharedManager;
-(id)attributeDescriptions;
-(id)init;


@end


#endif