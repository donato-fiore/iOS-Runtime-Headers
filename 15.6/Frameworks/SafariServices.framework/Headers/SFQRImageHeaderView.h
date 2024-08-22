// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFQRIMAGEHEADERVIEW_H
#define SFQRIMAGEHEADERVIEW_H

@class UIView, UIImageView;
@protocol BCSAction;



@interface SFQRImageHeaderView : UIView {
    UIImageView *_iconView;
}


@property (weak, nonatomic) NSObject<BCSAction> *action; // ivar: _action


-(id)_title;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif