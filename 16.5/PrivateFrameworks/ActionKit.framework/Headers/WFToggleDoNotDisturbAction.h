// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTOGGLEDONOTDISTURBACTION_H
#define WFTOGGLEDONOTDISTURBACTION_H

@class WFHandleCustomIntentAction;



@interface WFToggleDoNotDisturbAction : WFHandleCustomIntentAction



-(id)appIdentifier;
-(id)appResource;
-(id)contentDestinationWithError:(*id)arg0 ;
-(void)generatePopulatedIntentFromInput:(id)arg0 processedParameters:(id)arg1 completion:(id)arg2 ;
-(void)resolveSlot:(id)arg0 withProcessedValue:(id)arg1 parameter:(id)arg2 input:(id)arg3 completion:(id)arg4 ;


@end


#endif