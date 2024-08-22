// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACUIACCOUNTSUMMARYCELL_H
#define ACUIACCOUNTSUMMARYCELL_H

@class PSTableCell, UILabel, NSSet, ACAccount, NSString;



@interface ACUIAccountSummaryCell : PSTableCell {
    NSInteger _style;
    UILabel *_dataclassesLabel;
    NSSet *_enabledDataclasses;
    NSSet *_supportedDataclasses;
    ACAccount *_account;
    BOOL _useCustomDetailsText;
    NSString *_desiredValue;
}




+(id)_nameForAccountSpecifier:(id)arg0 withStyle:(NSInteger)arg1 ;
+(id)_valueForCellSpecifier:(id)arg0 ;
+(id)specifierWithStyle:(NSInteger)arg0 account:(id)arg1 detailControllerClass:(Class)arg2 presentationStyle:(NSInteger)arg3 ;
+(id)specifierWithStyle:(NSInteger)arg0 account:(id)arg1 target:(id)arg2 controllerLoadAction:(SEL)arg3 ;
+(id)specifierWithStyle:(NSInteger)arg0 account:(id)arg1 valueText:(id)arg2 detailControllerClass:(Class)arg3 presentationStyle:(NSInteger)arg4 ;
+(void)_configureSpecifier:(id)arg0 forAccount:(id)arg1 withStyle:(NSInteger)arg2 valueText:(id)arg3 ;
-(id)_dataclassesLabel;
-(id)_enabledDataclassesTextForWidth:(CGFloat)arg0 ;
-(id)_font;
-(id)_numberFormatter;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)hideDataclass:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif