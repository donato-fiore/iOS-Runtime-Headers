// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCREDENTIALREQUESTLOGINCHOICECELL_H
#define ASCREDENTIALREQUESTLOGINCHOICECELL_H

@class UITableViewCell, ASCAuthorizationPresentationContext, AKASAuthorizationProvider, UILabel, UIImageView, NSString, UIImage;
@protocol ASCLoginChoiceProtocol;



@interface ASCredentialRequestLoginChoiceCell : UITableViewCell {
    id<ASCLoginChoiceProtocol> *_loginChoice;
    ASCAuthorizationPresentationContext *_presentationContext;
    AKASAuthorizationProvider *_authorizationProvider;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_iconImageView;
}


@property (retain, nonatomic) NSString *detailText;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) BOOL isSelectedLoginChoice;
@property (retain, nonatomic) NSString *title;


-(CGFloat)_leadingIconImageOffset;
-(id)_cellLabelFontWithStyle:(id)arg0 traits:(unsigned int)arg1 ;
-(id)_detailTextForExternalPasswordLoginChoice:(id)arg0 ;
-(id)_detailTextForPasswordLoginChoice:(id)arg0 ;
-(id)_detailTextForPasswordLoginChoiceFromKeychain:(id)arg0 ;
-(id)_publicKeyCredentialImageForPresentationContext:(id)arg0 ;
-(id)_titleForPublicKeyCredentialAssertionWithName:(id)arg0 userHandle:(id)arg1 ;
-(id)initWithLoginChoice:(id)arg0 presentationContext:(id)arg1 authorizationProvider:(id)arg2 ;
-(void)_hideIconBorder;
-(void)_setUpConstraints;
-(void)_setUpContent;
-(void)_setUpFormat;
-(void)_showIconBorder;


@end


#endif