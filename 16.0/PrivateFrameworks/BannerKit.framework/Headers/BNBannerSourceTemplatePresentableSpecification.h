// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BNBANNERSOURCETEMPLATEPRESENTABLESPECIFICATION_H
#define BNBANNERSOURCETEMPLATEPRESENTABLESPECIFICATION_H

@class NSString, NSUUID;
@protocol BNTemplateContentProvidingSpecifying, BNTemplateViewProviding, BNTemplateItemProviding;


#import "BNBannerSourcePresentableSpecification.h"

@interface BNBannerSourceTemplatePresentableSpecification : BNBannerSourcePresentableSpecification <BNTemplateContentProvidingSpecifying>



@property (readonly, nonatomic) NSInteger contentBehavior;
@property (readonly, nonatomic) UIEdgeInsets contentOutsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<BNTemplateViewProviding> *leadingTemplateViewProvider; // ivar: _leadingTemplateViewProvider
@property (readonly, nonatomic) CGSize preferredContentSize;
@property (copy, nonatomic) NSString *presentableAccessibilityIdentifier; // ivar: _presentableAccessibilityIdentifier
@property (readonly, nonatomic) NSInteger presentableBehavior;
@property (retain, nonatomic) NSObject<BNTemplateItemProviding> *primaryTemplateItemProvider; // ivar: _primaryTemplateItemProvider
@property (readonly, nonatomic) BOOL providesTemplateContent;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (retain, nonatomic) NSObject<BNTemplateItemProviding> *secondaryTemplateItemProvider; // ivar: _secondaryTemplateItemProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<BNTemplateViewProviding> *trailingTemplateViewProvider; // ivar: _trailingTemplateViewProvider
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSUUID *uniquePresentableIdentifier;


-(id)initWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif