// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCHOOSEFROMLISTITEMRESOLUTIONRESULT_H
#define WFCHOOSEFROMLISTITEMRESOLUTIONRESULT_H

@class INObjectResolutionResult;



@interface WFChooseFromListItemResolutionResult : INObjectResolutionResult



+(BOOL)supportsSecureCoding;
+(id)confirmationRequiredWithChooseFromListItemToConfirm:(id)arg0 ;
+(id)disambiguationWithChooseFromListItemsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedChooseFromListItem:(id)arg0 ;


@end


#endif