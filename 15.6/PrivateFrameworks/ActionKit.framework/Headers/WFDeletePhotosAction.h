// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDELETEPHOTOSACTION_H
#define WFDELETEPHOTOSACTION_H

@class WFHandleCustomIntentAction;



@interface WFDeletePhotosAction : WFHandleCustomIntentAction



-(BOOL)inputPassthrough;
-(BOOL)populatesInputFromInputParameter;
-(void)resolveSlot:(id)arg0 withProcessedValue:(id)arg1 parameter:(id)arg2 input:(id)arg3 completion:(id)arg4 ;


@end


#endif