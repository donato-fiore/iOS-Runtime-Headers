// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSEARCHLOCALBUSINESSESACTION_H
#define WFSEARCHLOCALBUSINESSESACTION_H

@class WFAction, MKLocalSearch;



@interface WFSearchLocalBusinessesAction : WFAction

@property (retain, nonatomic) MKLocalSearch *localSearch; // ivar: _localSearch


-(BOOL)shouldUseMetricSystem;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)cancel;
-(void)getContentDestinationWithCompletionHandler:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)runSearchWithLocation:(id)arg0 inputDisclosureLevel:(NSUInteger)arg1 ;


@end


#endif