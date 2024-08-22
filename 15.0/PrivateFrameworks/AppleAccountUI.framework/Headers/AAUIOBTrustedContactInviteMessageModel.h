// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUIOBTRUSTEDCONTACTINVITEMESSAGEMODEL_H
#define AAUIOBTRUSTEDCONTACTINVITEMESSAGEMODEL_H

@class AAOBTrustedContactInviteMessageModel, UIView, AACustodianshipInfo, NSString, UIImage;
@protocol AAUIOBWelcomeControllerViewModelProtocol;



@interface AAUIOBTrustedContactInviteMessageModel : AAOBTrustedContactInviteMessageModel <AAUIOBWelcomeControllerViewModelProtocol>



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
@property (copy, nonatomic) NSString *ownerHandle;
@property (copy, nonatomic) NSString *primaryButton;
@property (copy, nonatomic) NSString *recipientHandle;
@property (copy, nonatomic) NSString *secondaryButton;
@property (copy, nonatomic) UIView *secondaryView; // ivar: _secondaryView
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


-(id)_horizontalStackView;
-(id)_memoBalloonViewWithText:(id)arg0 ;
-(id)_verticalStackView;
-(id)initWithModel:(id)arg0 ;
-(void)_setupContentViewWithBubbleText:(id)arg0 ;


@end


#endif