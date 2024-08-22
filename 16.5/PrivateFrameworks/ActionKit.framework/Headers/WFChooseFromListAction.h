// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCHOOSEFROMLISTACTION_H
#define WFCHOOSEFROMLISTACTION_H

@class WFHandleCustomIntentAction;



@interface WFChooseFromListAction : WFHandleCustomIntentAction



+(BOOL)outputIsExemptFromTaintTrackingInheritance;
+(id)userInterfaceProtocol;
-(BOOL)populatesInputFromInputParameter;
-(BOOL)shouldBeSuggestedAfterAction:(id)arg0 inWorkflow:(id)arg1 ;
-(id)appResource;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)contentItemsFromSelectedItem:(id)arg0 ;
-(id)itemsFromDictionaryItem:(id)arg0 ;
-(id)roundedImageFromWFImage:(id)arg0 roundingStyle:(NSUInteger)arg1 desiredSize:(struct CGSize )arg2 desiredScale:(CGFloat)arg3 ;
-(void)getOutputFromIntentResponse:(id)arg0 completionHandler:(id)arg1 ;
-(void)presentAlertWithUserInterface:(id)arg0 prompt:(id)arg1 input:(id)arg2 ;
-(void)resolveSlot:(id)arg0 withProcessedValue:(id)arg1 parameter:(id)arg2 input:(id)arg3 completion:(id)arg4 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif