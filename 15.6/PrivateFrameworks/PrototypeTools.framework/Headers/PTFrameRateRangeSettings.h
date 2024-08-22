// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTFRAMERATERANGESETTINGS_H
#define PTFRAMERATERANGESETTINGS_H

@class NSString;
@protocol BSDescriptionProviding;


#import "PTSettings.h"

@interface PTFrameRateRangeSettings : PTSettings <BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CAFrameRateRange frameRateRange;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int highFrameRateReason;
@property (nonatomic) int maximum; // ivar: _maximum
@property (nonatomic) int minimum; // ivar: _minimum
@property (nonatomic) int preferred; // ivar: _preferred
@property (nonatomic) NSUInteger preset; // ivar: _preset
@property (nonatomic) unsigned short reason; // ivar: _reason
@property (nonatomic) unsigned short reasonComponent; // ivar: _reasonComponent
@property (readonly) Class superclass;


+(BOOL)ignoresKey:(id)arg0 ;
+(id)settingsControllerModule;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)drillDownSummary;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)setDefaultValues;
-(void)validate;


@end


#endif