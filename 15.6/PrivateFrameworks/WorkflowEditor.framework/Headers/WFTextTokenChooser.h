// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTEXTTOKENCHOOSER_H
#define WFTEXTTOKENCHOOSER_H

@class NSArray, NSSet, NSString, WFAlert, NSIndexSet, WFVariable;
@protocol WFUIKitUserInterface;

#import <Foundation/Foundation.h>


@interface WFTextTokenChooser : NSObject

@property (copy, nonatomic) NSArray *additionalButtons; // ivar: _additionalButtons
@property (copy, nonatomic) NSSet *allowedVariableTypes; // ivar: _allowedVariableTypes
@property (copy, nonatomic) NSArray *auxiliaryButtons; // ivar: _auxiliaryButtons
@property (copy, nonatomic) id *cancelHandler; // ivar: _cancelHandler
@property (copy, nonatomic) id *choiceHandler; // ivar: _choiceHandler
@property (nonatomic) NSInteger maximumSelectableItemsCount; // ivar: _maximumSelectableItemsCount
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSString *noChoicesMessage; // ivar: _noChoicesMessage
@property (retain, nonatomic) WFAlert *presentedAlert; // ivar: _presentedAlert
@property (retain, nonatomic) NSIndexSet *selectedButtonIndexes; // ivar: _selectedButtonIndexes
@property (retain, nonatomic) WFVariable *selectedVariable; // ivar: _selectedVariable
@property (nonatomic) BOOL showsClearButton; // ivar: _showsClearButton
@property (nonatomic) BOOL showsDoneButton; // ivar: _showsDoneButton
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (weak, nonatomic) NSObject<WFUIKitUserInterface> *userInterface; // ivar: _userInterface


-(BOOL)displaysAnyVariablesWithAllowedVariableTypes:(id)arg0 variableProvider:(id)arg1 variableUIDelegate:(id)arg2 ;
-(BOOL)shouldShowVariable:(id)arg0 allowedVariableTypes:(id)arg1 variableProvider:(id)arg2 variableUIDelegate:(id)arg3 ;
-(id)init;
-(id)textTokenChooserButtonForVariable:(id)arg0 selected:(BOOL)arg1 ;
-(void)dismissWithCompletionHandler:(id)arg0 ;
-(void)presentMenuFromPresentationAnchor:(id)arg0 ;
-(void)presentWithVariableProvider:(id)arg0 variableUIDelegate:(id)arg1 presentationAnchor:(id)arg2 ;
-(void)updateButtonsInAlert:(id)arg0 ;
-(void)updateButtonsInPresentedView;


@end


#endif