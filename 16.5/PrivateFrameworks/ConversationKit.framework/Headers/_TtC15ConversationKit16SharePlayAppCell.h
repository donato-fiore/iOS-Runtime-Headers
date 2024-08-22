// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15CONVERSATIONKIT16SHAREPLAYAPPCELL_H
#define _TTC15CONVERSATIONKIT16SHAREPLAYAPPCELL_H

@class UICollectionViewCell;



@interface _TtC15ConversationKit16SharePlayAppCell : UICollectionViewCell {
    ? appIconImageView;
    ? appTitleLabel;
    ? applicationBundleIdentifier;
    ? onTap;
    ? $__lazy_storage_$_tapRecognizer;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTapWithSender:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif