// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTRANSLATETEXTACTION_H
#define WFTRANSLATETEXTACTION_H

@class WFAction;



@interface WFTranslateTextAction : WFAction



-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)translateText:(id)arg0 fromLocale:(id)arg1 toLocale:(id)arg2 translator:(id)arg3 completionBlock:(id)arg4 ;


@end


#endif