// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFADJUSTDATEACTION_H
#define WFADJUSTDATEACTION_H

@class WFAction;



@interface WFAdjustDateAction : WFAction



-(id)transformDate:(id)arg0 operation:(NSUInteger)arg1 ;
-(void)finishWithInput:(id)arg0 dateTransform:(id)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif