// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15CONVERSATIONKIT32INCALLCONTROLSTOGGLECAPTIONSCELL_H
#define _TTC15CONVERSATIONKIT32INCALLCONTROLSTOGGLECAPTIONSCELL_H

@class UICollectionViewListCell;



@interface _TtC15ConversationKit32InCallControlsToggleCaptionsCell : UICollectionViewListCell {
    ? delegate;
    ? $__lazy_storage_$_toggleCaptionsSwitch;
    ? $__lazy_storage_$_switchAccessory;
    ? $__lazy_storage_$_cellContentConfiguration;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didToggleCaptions;


@end


#endif