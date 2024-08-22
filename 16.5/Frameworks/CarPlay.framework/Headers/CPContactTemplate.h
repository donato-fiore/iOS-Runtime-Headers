// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPCONTACTTEMPLATE_H
#define CPCONTACTTEMPLATE_H

@class NSString, NSArray, NAFuture;
@protocol NSSecureCoding, CPEntityProviding, CPEntityClientTemplateDelegate, CPBarButtonProviding;


#import "CPTemplate.h"
#import "CPBarButton.h"
#import "CPContact.h"

@interface CPContactTemplate : CPTemplate <NSSecureCoding, CPEntityProviding, CPEntityClientTemplateDelegate, CPBarButtonProviding>



@property (retain, nonatomic) CPBarButton *backButton;
@property (retain, nonatomic) CPContact *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *leadingNavigationBarButtons;
@property (readonly) Class superclass;
@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (retain, nonatomic) NSArray *trailingNavigationBarButtons;


+(BOOL)supportsSecureCoding;
-(BOOL)control:(id)arg0 setEnabled:(BOOL)arg1 ;
-(BOOL)control:(id)arg0 setSelected:(BOOL)arg1 ;
-(id)entity;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContact:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleActionForControlIdentifier:(id)arg0 ;
-(void)performUpdate;


@end


#endif