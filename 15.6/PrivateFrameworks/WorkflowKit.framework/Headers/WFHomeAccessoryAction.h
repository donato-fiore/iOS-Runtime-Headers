// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFHOMEACCESSORYACTION_H
#define WFHOMEACCESSORYACTION_H

@class NSArray, NSString, HMHome;
@protocol WFHomeManagerEventObserver;


#import "WFAction.h"

@interface WFHomeAccessoryAction : WFAction <WFHomeManagerEventObserver>



@property (readonly, nonatomic) NSArray *actionSets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSString *homeIdentifier;
@property (readonly, nonatomic) NSArray *shortcutsDictionaryRepresentations;
@property (readonly) Class superclass;


+(id)homeAccessoryActionWithHome:(id)arg0 actionSets:(id)arg1 ;
+(id)homeAccessoryActionWithTriggerActionSetsBuilder:(id)arg0 ;
-(id)localizedAttribution;
-(id)localizedDescriptionSummary;
-(id)localizedName;
-(id)localizedSummaryText;
-(id)parameterSummaryString;
-(void)dealloc;
-(void)homeManagerDidUpdateHomes:(id)arg0 ;
-(void)initializeParameters;
-(void)localizedParameterSummaryWithCompletion:(id)arg0 ;
-(void)performHomeAccessoryAction;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif