// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSPSLEEPFOCUSCONFIGURATION_H
#define HKSPSLEEPFOCUSCONFIGURATION_H

@class NSString;
@protocol BSDescriptionProviding, NAEquatable, NAHashable;

#import <Foundation/Foundation.h>


@interface HKSPSleepFocusConfiguration : NSObject <BSDescriptionProviding, NAEquatable, NAHashable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSleepFocusMode; // ivar: _hasSleepFocusMode
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL mirrorsSleepFocusMode; // ivar: _mirrorsSleepFocusMode
@property (readonly) Class superclass;


+(id)emptySleepFocusConfiguration;
+(id)readFromDefaults;
-(BOOL)isEqual:(id)arg0 ;
-(id)copy;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithHasSleepFocusMode:(BOOL)arg0 mirrorsSleepFocusMode:(BOOL)arg1 ;
-(id)sleepFocusConfigurationUpdatingHasSleepFocusMode:(BOOL)arg0 ;
-(id)sleepFocusConfigurationUpdatingMirrorsSleepFocusMode:(BOOL)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)writeToDefaults;


@end


#endif