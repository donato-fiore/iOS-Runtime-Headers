// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AUDEVELOPERSETTINGSTEXTEDITINGCONTROLLER_H
#define AUDEVELOPERSETTINGSTEXTEDITINGCONTROLLER_H

@class PSListController, NSString;
@protocol UITextFieldDelegate;



@interface AUDeveloperSettingsTextEditingController : PSListController <UITextFieldDelegate>

 {
    NSString *_identifier;
    BOOL _keyboardShownOnce;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldSelectResponderOnAppearance;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)getValue:(id)arg0 ;
-(id)init;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)keyboardWillShow:(id)arg0 ;
-(void)saveEditedValue:(id)arg0 specifier:(id)arg1 ;
-(void)setBuildName:(id)arg0 ;
-(void)setTrainName:(id)arg0 ;
-(void)suspend;
-(void)textDidChange:(id)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif