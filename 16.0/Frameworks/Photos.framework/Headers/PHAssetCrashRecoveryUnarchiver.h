// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASSETCRASHRECOVERYUNARCHIVER_H
#define PHASSETCRASHRECOVERYUNARCHIVER_H

@class NSKeyedUnarchiver, NSString;
@protocol PLXPCCoder, NSObject;



@interface PHAssetCrashRecoveryUnarchiver : NSKeyedUnarchiver <PLXPCCoder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain) NSObject<NSObject> *userInfo; // ivar: _userInfo




@end


#endif