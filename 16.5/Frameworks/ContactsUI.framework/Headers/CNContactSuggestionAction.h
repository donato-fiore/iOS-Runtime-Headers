// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTSUGGESTIONACTION_H
#define CNCONTACTSUGGESTIONACTION_H



#import "CNContactAction.h"

@interface CNContactSuggestionAction : CNContactAction



-(BOOL)_confirmOrReject:(BOOL)arg0 ;
-(BOOL)confirmSuggestion;
-(BOOL)ignoreSuggestion;
-(void)performActionWithSender:(id)arg0 ;


@end


#endif