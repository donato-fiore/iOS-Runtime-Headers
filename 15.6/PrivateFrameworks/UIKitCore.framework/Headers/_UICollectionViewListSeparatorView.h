// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONVIEWLISTSEPARATORVIEW_H
#define _UICOLLECTIONVIEWLISTSEPARATORVIEW_H



#import "UICollectionReusableView.h"
#import "UIVisualEffectView.h"

@interface _UICollectionViewListSeparatorView : UICollectionReusableView {
    UIVisualEffectView *_effectView;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setUpEffectViewWithEffect:(id)arg0 ;
-(void)_tearDownEffectView;
-(void)applyLayoutAttributes:(id)arg0 ;


@end


#endif