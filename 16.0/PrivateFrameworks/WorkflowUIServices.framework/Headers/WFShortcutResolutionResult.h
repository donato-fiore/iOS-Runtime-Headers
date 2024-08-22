// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSHORTCUTRESOLUTIONRESULT_H
#define WFSHORTCUTRESOLUTIONRESULT_H

@class INObjectResolutionResult;



@interface WFShortcutResolutionResult : INObjectResolutionResult



+(BOOL)supportsSecureCoding;
+(id)confirmationRequiredWithShortcutToConfirm:(id)arg0 ;
+(id)disambiguationWithShortcutsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedShortcut:(id)arg0 ;


@end


#endif