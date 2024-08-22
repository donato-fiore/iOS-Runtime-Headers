// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKTITLEDCONTACTBUDDYHEADERVIEW_H
#define HKTITLEDCONTACTBUDDYHEADERVIEW_H

@class NSLayoutConstraint;


#import "HKTitledBuddyHeaderView.h"

@interface HKTitledContactBuddyHeaderView : HKTitledBuddyHeaderView {
    NSLayoutConstraint *_titleBaselineConstraint;
}




-(CGFloat)bottomPadding;
-(id)initWithTopInset:(CGFloat)arg0 parentViewController:(id)arg1 ;
-(void)_updateForCurrentSizeCategory;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif