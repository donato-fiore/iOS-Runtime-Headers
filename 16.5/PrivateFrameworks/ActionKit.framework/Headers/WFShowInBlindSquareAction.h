// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSHOWINBLINDSQUAREACTION_H
#define WFSHOWINBLINDSQUAREACTION_H

@class WFAction;



@interface WFShowInBlindSquareAction : WFAction



-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)showLocation:(id)arg0 named:(id)arg1 address:(id)arg2 phoneNumber:(id)arg3 ;
-(void)showMapItem:(id)arg0 named:(id)arg1 ;
-(void)showPlacemark:(id)arg0 named:(id)arg1 phoneNumber:(id)arg2 ;


@end


#endif