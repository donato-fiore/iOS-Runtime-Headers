// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPINFORMATIONTEMPLATE_H
#define CPINFORMATIONTEMPLATE_H

@class NSArray, NSString, NAFuture;
@protocol CPTemplateDelegate, NSSecureCoding, CPBarButtonProviding;


#import "CPTemplate.h"
#import "CPBarButton.h"

@interface CPInformationTemplate : CPTemplate <CPTemplateDelegate, NSSecureCoding, CPBarButtonProviding>



@property (copy, nonatomic) NSArray *actions; // ivar: _actions
@property (retain, nonatomic) CPBarButton *backButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (readonly, nonatomic) NSInteger layout; // ivar: _layout
@property (retain, nonatomic) NSArray *leadingNavigationBarButtons;
@property (readonly) Class superclass;
@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSArray *trailingNavigationBarButtons;


+(BOOL)supportsSecureCoding;
-(id)_sanitizeButtons:(id)arg0 ;
-(id)_sanitizeItems:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 layout:(NSInteger)arg1 items:(id)arg2 actions:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleActionForControlIdentifier:(id)arg0 ;
-(void)performUpdate;
-(void)updateTemplatePropertiesFromTemplate:(id)arg0 ;


@end


#endif