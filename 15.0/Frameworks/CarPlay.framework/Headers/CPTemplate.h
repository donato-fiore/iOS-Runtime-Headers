// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPTEMPLATE_H
#define CPTEMPLATE_H

@class NSString, NSUUID, NSArray, UIImage, NAFuture;
@protocol CPBarButtonDelegate, CPBarButtonProviding, CPControlDelegate, CPTemplateDelegate, NSSecureCoding, CPBaseTemplateProviding;

#import <Foundation/Foundation.h>

#import "CPBarButton.h"

@interface CPTemplate : NSObject <CPBarButtonDelegate, CPBarButtonProviding, CPControlDelegate, CPTemplateDelegate, NSSecureCoding>



@property (retain, nonatomic) CPBarButton *backButton; // ivar: _backButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) NSArray *internalLeadingBarButtons; // ivar: _internalLeadingBarButtons
@property (retain, nonatomic) NSArray *internalTrailingBarButtons; // ivar: _internalTrailingBarButtons
@property (retain, nonatomic) NSArray *leadingNavigationBarButtons;
@property (nonatomic) BOOL needsUpdate; // ivar: _needsUpdate
@property (nonatomic) BOOL showsTabBadge; // ivar: _showsTabBadge
@property (readonly) Class superclass;
@property (retain, nonatomic) UIImage *tabImage; // ivar: _tabImage
@property (nonatomic) NSInteger tabSystemItem; // ivar: _tabSystemItem
@property (copy, nonatomic) NSString *tabTitle; // ivar: _tabTitle
@property (weak, nonatomic) NSObject<CPTemplateDelegate> *templateDelegate; // ivar: _templateDelegate
@property (retain, nonatomic) NSObject<CPBaseTemplateProviding> *templateProvider; // ivar: _templateProvider
@property (retain, nonatomic) NAFuture *templateProviderFuture; // ivar: _templateProviderFuture
@property (retain, nonatomic) NSArray *trailingNavigationBarButtons;
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(BOOL)barButton:(id)arg0 setImage:(id)arg1 ;
-(BOOL)barButton:(id)arg0 setTitle:(id)arg1 ;
-(BOOL)control:(id)arg0 setEnabled:(BOOL)arg1 ;
-(BOOL)control:(id)arg0 setSelected:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)connectTemplateProvider:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleActionForControlIdentifier:(id)arg0 ;
-(void)invalidateTemplateProvider;
-(void)performUpdate;
-(void)templateDidAppearWithIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)templateDidDisappearWithIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)templateWillAppearWithIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)templateWillDisappearWithIdentifier:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif