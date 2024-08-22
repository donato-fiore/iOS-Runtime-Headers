// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FAFAMILYHEADERVIEW_H
#define FAFAMILYHEADERVIEW_H

@class UIView, UILabel;


#import "FAMugshotMarqueeView.h"

@interface FAFamilyHeaderView : UIView {
    FAMugshotMarqueeView *_mugShots;
}


@property (readonly, nonatomic) UILabel *familyHeaderLabel; // ivar: _familyHeaderLabel


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFamilyCircle:(id)arg0 profilePictureStore:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif