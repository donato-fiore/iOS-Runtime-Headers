// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBASSISTANTPRESENTATIONOBSERVATIONTOKEN_H
#define SBASSISTANTPRESENTATIONOBSERVATIONTOKEN_H

@class NSString;
@protocol SBAssistantObserver;


#import "SBPresentationObservationToken.h"
#import "SBAssistantController.h"

@interface SBAssistantPresentationObservationToken : SBPresentationObservationToken <SBAssistantObserver>



@property (readonly, nonatomic) SBAssistantController *assistantController; // ivar: _assistantController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)state;
-(id)initWithAssistantController:(id)arg0 scene:(id)arg1 ;
-(void)assistantDidAppear:(id)arg0 windowScene:(id)arg1 ;
-(void)assistantDidDisappear:(id)arg0 windowScene:(id)arg1 ;
-(void)assistantWillAppear:(id)arg0 windowScene:(id)arg1 ;
-(void)assistantWillDisappear:(id)arg0 windowScene:(id)arg1 ;
-(void)dealloc;


@end


#endif