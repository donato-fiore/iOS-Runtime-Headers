// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPROPERTYSUGGESTIONACTION_H
#define CNPROPERTYSUGGESTIONACTION_H



#import "CNPropertyAction.h"
#import "CNContactSuggestionViewController.h"

@interface CNPropertySuggestionAction : CNPropertyAction

@property (nonatomic) NSInteger selectedChoice; // ivar: _selectedChoice
@property (retain, nonatomic) CNContactSuggestionViewController *suggestionViewController; // ivar: _suggestionViewController


-(BOOL)_confirmOrReject:(BOOL)arg0 ;
-(BOOL)_confirmOrRejectDonation:(BOOL)arg0 ;
-(BOOL)_confirmOrRejectSuggestion:(BOOL)arg0 ;
-(id)dataSourceWithPropertyItem:(id)arg0 ;
-(void)confirm;
-(void)performActionForItem:(id)arg0 sender:(id)arg1 ;
-(void)reject;


@end


#endif