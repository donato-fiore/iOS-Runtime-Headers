// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPACTIONSHEETTEMPLATE_H
#define CPACTIONSHEETTEMPLATE_H

@class NSArray, NSString;
@protocol CPAlertDelegate;


#import "CPTemplate.h"

@interface CPActionSheetTemplate : CPTemplate <CPAlertDelegate>



@property (readonly, nonatomic) NSArray *actions; // ivar: _actions
@property (retain, nonatomic) NSObject<CPAlertDelegate> *alertDelegate; // ivar: _alertDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *message; // ivar: _message
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 message:(id)arg1 actions:(id)arg2 ;
-(id)leadingNavigationBarButtons;
-(id)trailingNavigationBarButtons;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleAlertActionForIdentifier:(id)arg0 ;
-(void)setLeadingNavigationBarButtons:(id)arg0 ;
-(void)setTrailingNavigationBarButtons:(id)arg0 ;


@end


#endif