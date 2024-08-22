// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUIOBINHERITANCEINTROVIEWMODEL_H
#define AAUIOBINHERITANCEINTROVIEWMODEL_H

@class AATrustedContactsInheritanceSplashScreenModel, UIView, AACustodianshipInfo, NSString, UIImage;
@protocol AAUIOBWelcomeControllerViewModelProtocol, AAOBBulletedWelcomeControllerModelProtocol;



@interface AAUIOBInheritanceIntroViewModel : AATrustedContactsInheritanceSplashScreenModel <AAUIOBWelcomeControllerViewModelProtocol, AAOBBulletedWelcomeControllerModelProtocol>



@property (copy, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) NSInteger contentViewLayout; // ivar: _contentViewLayout
@property (copy, nonatomic) AACustodianshipInfo *custodianshipInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detailText;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *helpLinkTitle;
@property (copy, nonatomic) NSString *helpLinkURL;
@property (copy, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) NSString *imageName;
@property (nonatomic) BOOL isWalrusEnabled;
@property (copy, nonatomic) NSString *leftBarButton;
@property (copy, nonatomic) NSString *ownerHandle;
@property (copy, nonatomic) NSString *primaryButton;
@property (copy, nonatomic) NSString *recipientHandle;
@property (copy, nonatomic) NSString *secondaryButton;
@property (copy, nonatomic) UIView *secondaryView; // ivar: _secondaryView
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


-(id)init;


@end


#endif