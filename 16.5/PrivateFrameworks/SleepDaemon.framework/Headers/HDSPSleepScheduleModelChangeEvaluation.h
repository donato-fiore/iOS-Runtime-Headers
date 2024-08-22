// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPSLEEPSCHEDULEMODELCHANGEEVALUATION_H
#define HDSPSLEEPSCHEDULEMODELCHANGEEVALUATION_H

@class NSString, NSSet;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface HDSPSleepScheduleModelChangeEvaluation : NSObject <BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSignificantChange; // ivar: _isSignificantChange
@property (readonly, nonatomic) BOOL isSignificantEventRecordUpdate; // ivar: _isSignificantEventRecordUpdate
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *topLevelChangeKeys; // ivar: _topLevelChangeKeys


+(id)combinedEvaluation:(id)arg0 ;
+(id)emptyEvaluation;
+(id)significantChangeWithTopLevelChangeKeys:(id)arg0 ;
+(id)significantEventRecordUpdateWithTopLevelChangeKeys:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithIsSignificantChange:(BOOL)arg0 isSignificantEventRecordUpdate:(BOOL)arg1 topLevelChangeKeys:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif