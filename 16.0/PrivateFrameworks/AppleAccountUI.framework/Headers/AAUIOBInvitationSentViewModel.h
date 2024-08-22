// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIOBINVITATIONSENTVIEWMODEL_H
#define AAUIOBINVITATIONSENTVIEWMODEL_H

@class AAOBInvitationSentModel, UIView, AACustodianshipInfo, NSString, UIImage;
@protocol AAUIOBWelcomeControllerViewModelProtocol;



@interface AAUIOBInvitationSentViewModel : AAOBInvitationSentModel <AAUIOBWelcomeControllerViewModelProtocol>



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
@property (copy, nonatomic) NSString *leftBarButton;
@property (copy, nonatomic) NSString *ownerHandle;
@property (copy, nonatomic) NSString *primaryButton;
@property (copy, nonatomic) NSString *recipientHandle;
@property (copy, nonatomic) NSString *secondaryButton;
@property (copy, nonatomic) UIView *secondaryView; // ivar: _secondaryView
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


-(id)initWithModel:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 recipientHandle:(id)arg1 ;
-(void)_setupAAUIOBWelcomeControllerProtocolProperties;


@end


#endif