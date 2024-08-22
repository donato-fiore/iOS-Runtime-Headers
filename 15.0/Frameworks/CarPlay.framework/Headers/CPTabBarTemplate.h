// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPTABBARTEMPLATE_H
#define CPTABBARTEMPLATE_H

@class NSString, NAFuture, NSArray;
@protocol CPTabBarClientTemplateDelegate, CPTabBarTemplateDelegate, CPTabBarTemplateProviding;


#import "CPTemplate.h"
#import "CPInterfaceController.h"

@interface CPTabBarTemplate : CPTemplate <CPTabBarClientTemplateDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPTabBarTemplateDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger indexOfSelectedTab; // ivar: _indexOfSelectedTab
@property (weak, nonatomic) CPInterfaceController *interfaceController; // ivar: _interfaceController
@property (readonly, nonatomic) CPTemplate *selectedTemplate;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<CPTabBarTemplateProviding> *templateProvider; // ivar: _templateProvider
@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (readonly, nonatomic) NSArray *templates; // ivar: _templates


+(BOOL)supportsSecureCoding;
+(NSUInteger)maximumTabCount;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTemplates:(id)arg0 ;
-(id)leadingNavigationBarButtons;
-(id)trailingNavigationBarButtons;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleActionForControlIdentifier:(id)arg0 ;
-(void)setLeadingNavigationBarButtons:(id)arg0 ;
-(void)setTrailingNavigationBarButtons:(id)arg0 ;
-(void)updateTemplates:(id)arg0 ;
-(void)validateTemplates:(id)arg0 ;


@end


#endif