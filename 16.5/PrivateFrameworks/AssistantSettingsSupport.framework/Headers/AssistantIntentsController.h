// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASSISTANTINTENTSCONTROLLER_H
#define ASSISTANTINTENTSCONTROLLER_H

@class PSListController, NSArray;
@protocol SiriAppsFooterViewDelegate;



@interface AssistantIntentsController : PSListController <SiriAppsFooterViewDelegate>



@property (retain, nonatomic) NSArray *intentsSpecifiers; // ivar: _intentsSpecifiers


-(id)accesssForSpecifier:(id)arg0 ;
-(id)init;
-(id)specifiers;
-(void)_fetchIntentsSpecifiersWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)setAccess:(id)arg0 forSpecifier:(id)arg1 ;
-(void)tccPreferencesChanged;
-(void)viewDidTapLearnMore:(id)arg0 ;


@end


#endif