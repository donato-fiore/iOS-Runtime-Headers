// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNAVATARVIEW_H
#define _CNAVATARVIEW_H

@class UIView, NSArray;
@protocol _CNAvatarViewDelegate;



@interface _CNAvatarView : UIView

@property (weak, nonatomic) NSObject<_CNAvatarViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSArray *likenessProviders; // ivar: _likenessProviders
@property (copy, nonatomic) NSArray *likenessViews; // ivar: _likenessViews
@property (copy, nonatomic) NSArray *subviewsConstraints; // ivar: _subviewsConstraints


+(BOOL)requiresConstraintBasedLayout;
-(void)setupSubviews;
-(void)updateConstraints;


@end


#endif