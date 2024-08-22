// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFALERT_H
#define WFALERT_H

@class NSError, NSArray, NSDate, NSString, NSMutableArray;
@protocol WFAlertPresenter;

#import <Foundation/Foundation.h>

#import "WFDatePickerConfiguration.h"
#import "WFAlertButton.h"
#import "WFTextFieldConfiguration.h"

@interface WFAlert : NSObject

@property (readonly, nonatomic) NSError *associatedError;
@property (copy, nonatomic) NSArray *buttons;
@property (retain, nonatomic) WFDatePickerConfiguration *datePickerConfiguration; // ivar: _datePickerConfiguration
@property (copy, nonatomic) NSDate *datePickerResult; // ivar: _datePickerResult
@property (nonatomic) NSUInteger dialogAttributionMode; // ivar: _dialogAttributionMode
@property (readonly, nonatomic) WFAlertButton *escapeButton;
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSMutableArray *mutableButtons; // ivar: _mutableButtons
@property (retain, nonatomic) NSMutableArray *mutableTextFieldConfigurationHandlers; // ivar: _mutableTextFieldConfigurationHandlers
@property (nonatomic) NSInteger preferredStyle; // ivar: _preferredStyle
@property (weak, nonatomic) NSObject<WFAlertPresenter> *presenter;
@property (weak, nonatomic) NSObject<WFAlertPresenter> *presenter; // ivar: _presenter
@property (retain, nonatomic) WFTextFieldConfiguration *textFieldConfiguration; // ivar: _textFieldConfiguration
@property (readonly, nonatomic) NSArray *textFieldConfigurationHandlers;
@property (copy, nonatomic) NSArray *textFieldResults; // ivar: _textFieldResults
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)alertWithError:(id)arg0 ;
+(id)alertWithError:(id)arg0 confirmationHandler:(id)arg1 ;
+(id)alertWithPreferredStyle:(NSInteger)arg0 ;
-(id)init;
-(void)addButton:(id)arg0 ;
-(void)addTextFieldWithConfigurationHandler:(id)arg0 ;
-(void)dismissWithCompletionHandler:(id)arg0 ;


@end


#endif