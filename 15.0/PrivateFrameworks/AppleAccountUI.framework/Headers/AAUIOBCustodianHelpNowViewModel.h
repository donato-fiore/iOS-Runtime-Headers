// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUIOBCUSTODIANHELPNOWVIEWMODEL_H
#define AAUIOBCUSTODIANHELPNOWVIEWMODEL_H

@class AAOBCustodianHelpNowModel, UIView, AACustodianshipInfo, NSString, UIImage;
@protocol AAUIOBWelcomeControllerViewModelProtocol;



@interface AAUIOBCustodianHelpNowViewModel : AAOBCustodianHelpNowModel <AAUIOBWelcomeControllerViewModelProtocol>



@property (copy, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) NSInteger contentViewLayout; // ivar: _contentViewLayout
@property (copy, nonatomic) AACustodianshipInfo *custodianshipInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
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
@property (copy, nonatomic) NSString *title; // ivar: _title


-(CGFloat)_scaleValue:(CGFloat)arg0 ;
-(id)initWithModel:(id)arg0 ;
-(id)initWithRecoveryCode:(id)arg0 ownerName:(id)arg1 ;
-(void)_setupAAUIOBWelcomeControllerProtocolProperties;


@end


#endif