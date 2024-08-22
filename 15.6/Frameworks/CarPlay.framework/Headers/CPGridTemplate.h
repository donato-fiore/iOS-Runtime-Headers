// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPGRIDTEMPLATE_H
#define CPGRIDTEMPLATE_H

@class NSString, NSArray, NAFuture;
@protocol CPGridTemplateClientDelegate, CPBarButtonProviding;


#import "CPTemplate.h"
#import "CPBarButton.h"

@interface CPGridTemplate : CPTemplate <CPGridTemplateClientDelegate, CPBarButtonProviding>



@property (retain, nonatomic) CPBarButton *backButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *gridButtons; // ivar: _gridButtons
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *leadingNavigationBarButtons;
@property (readonly) Class superclass;
@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSArray *trailingNavigationBarButtons;


+(BOOL)supportsSecureCoding;
-(id)_prepareButtons:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 gridButtons:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleActionForControlIdentifier:(id)arg0 ;
-(void)performUpdate;
-(void)updateGridButtons:(id)arg0 ;
-(void)updateTitle:(id)arg0 ;


@end


#endif