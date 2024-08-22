// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCREDENTIALREQUESTLOGINCHOICECELL_H
#define ASCREDENTIALREQUESTLOGINCHOICECELL_H

@class UITableViewCell, ASCAuthorizationPresentationContext, AKASAuthorizationProvider, UILabel, UIImageView, UIStackView, NSString, UIImage;
@protocol ASCLoginChoiceProtocol;



@interface ASCredentialRequestLoginChoiceCell : UITableViewCell {
    id<ASCLoginChoiceProtocol> *_loginChoice;
    ASCAuthorizationPresentationContext *_presentationContext;
    AKASAuthorizationProvider *_authorizationProvider;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_iconImageView;
    UIStackView *_iconAndTextStackView;
}


@property (retain, nonatomic) NSString *detailText;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) BOOL isSelectedLoginChoice; // ivar: _isSelectedLoginChoice
@property (retain, nonatomic) NSString *title;


-(BOOL)_shouldUseAppIconImageViewStyle;
-(CGFloat)_additionalLeadingSeparatorInset;
-(id)_cableIcon;
-(id)_defaultPasskeyIcon;
-(id)_detailTextForExternalPasswordLoginChoice:(id)arg0 ;
-(id)_detailTextForPasswordLoginChoice:(id)arg0 ;
-(id)_detailTextForPasswordLoginChoiceFromKeychain:(id)arg0 ;
-(id)_emptyRadioButtonImage;
-(id)_publicKeyCredentialImageForPresentationContext:(id)arg0 ;
-(id)_selectedRadioButtonImage;
-(id)_titleForPublicKeyCredentialAssertionWithName:(id)arg0 identifier:(id)arg1 ;
-(id)initWithLoginChoice:(id)arg0 presentationContext:(id)arg1 authorizationProvider:(id)arg2 ;
-(void)_configureIconImageStyle;
-(void)_configureImageViewForAppIcon;
-(void)_configureImageViewForSymbolImage;
-(void)_setUpAccessoryImageView;
-(void)_setUpContent;
-(void)_setUpFormat;
-(void)_updateAccessoryImageView;
-(void)_updateLayoutForCurrentContentSizeCategory;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif