// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSRBIOMETRICMATCH_H
#define SSRBIOMETRICMATCH_H

@class BKDevice, NSString;
@protocol BKDeviceDelegate;

#import <Foundation/Foundation.h>


@interface SSRBiometricMatch : NSObject <BKDeviceDelegate>



@property (retain, nonatomic) BKDevice *biometricDevice; // ivar: _biometricDevice
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_getLastBiometricMatchEvent:(*BOOL)arg0 atTime:(*NSUInteger)arg1 ;
-(NSUInteger)getLastBiometricMatchForVoiceTriggerTimeStamp:(NSUInteger)arg0 ;
-(id)init;


@end


#endif