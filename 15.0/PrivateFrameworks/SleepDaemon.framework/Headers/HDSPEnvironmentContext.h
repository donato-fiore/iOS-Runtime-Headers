// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPENVIRONMENTCONTEXT_H
#define HDSPENVIRONMENTCONTEXT_H

@class NSString;
@protocol BSDescriptionProviding, HDSPSource;

#import <Foundation/Foundation.h>

#import "HDSPSleepScheduleModelChangeEvaluation.h"

@interface HDSPEnvironmentContext : NSObject <BSDescriptionProviding>



@property (readonly, nonatomic) HDSPSleepScheduleModelChangeEvaluation *changeEvaluation; // ivar: _changeEvaluation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HDSPSource> *source; // ivar: _source
@property (readonly) Class superclass;


+(id)contextWithSource:(id)arg0 ;
-(id)contextByApplyingChangeEvaluation:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithSource:(id)arg0 changeEvaluation:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif