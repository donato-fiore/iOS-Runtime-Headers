// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFFOLDERRESOLUTIONRESULT_H
#define WFFOLDERRESOLUTIONRESULT_H

@class INObjectResolutionResult;



@interface WFFolderResolutionResult : INObjectResolutionResult



+(id)confirmationRequiredWithFolderToConfirm:(id)arg0 ;
+(id)disambiguationWithFoldersToDisambiguate:(id)arg0 ;
+(id)successWithResolvedFolder:(id)arg0 ;


@end


#endif