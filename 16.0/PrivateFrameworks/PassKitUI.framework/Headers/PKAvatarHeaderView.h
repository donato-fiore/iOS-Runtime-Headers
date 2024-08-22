// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAVATARHEADERVIEW_H
#define PKAVATARHEADERVIEW_H

@class UIView, CNAvatarView, CNContact, NSString, UILabel;



@interface PKAvatarHeaderView : UIView {
    CNAvatarView *_avatarView;
}


@property (copy, nonatomic) CNContact *contact; // ivar: _contact
@property (copy, nonatomic) NSString *counterpartHandle; // ivar: _counterpartHandle
@property (copy, nonatomic) UILabel *primaryLabel; // ivar: _primaryLabel
@property (copy, nonatomic) UILabel *secondaryLabel; // ivar: _secondaryLabel


-(id)initWithContact:(id)arg0 counterpartHandle:(id)arg1 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 applyLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)configureForContact;
-(void)layoutSubviews;


@end


#endif