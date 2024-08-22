// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSPSLEEPFOCUSCONFIGURATION_H
#define HKSPSLEEPFOCUSCONFIGURATION_H

@class NSString, NSUUID;
@protocol BSDescriptionProviding, NAEquatable, NAHashable;

#import <Foundation/Foundation.h>


@interface HKSPSleepFocusConfiguration : NSObject <BSDescriptionProviding, NAEquatable, NAHashable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSleepFocusMode;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL mirrorsFocusModes; // ivar: _mirrorsFocusModes
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uuid; // ivar: _uuid


+(id)readFromDefaults;
-(BOOL)isEqual:(id)arg0 ;
-(id)copy;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithUUID:(id)arg0 mirrorsFocusModes:(BOOL)arg1 ;
-(id)sleepFocusConfigurationUpdatingMirrorsFocusModes:(BOOL)arg0 ;
-(id)sleepFocusConfigurationUpdatingUUID:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)writeToDefaults;


@end


#endif