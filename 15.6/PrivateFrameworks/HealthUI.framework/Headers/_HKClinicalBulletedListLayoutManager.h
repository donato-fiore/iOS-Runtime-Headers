// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKCLINICALBULLETEDLISTLAYOUTMANAGER_H
#define _HKCLINICALBULLETEDLISTLAYOUTMANAGER_H

@class NSLayoutManager, NSAttributedString;



@interface _HKClinicalBulletedListLayoutManager : NSLayoutManager {
    CGSize _bulletSize;
}


@property (copy, nonatomic) NSAttributedString *bullet; // ivar: _bullet


-(void)drawGlyphsForGlyphRange:(struct _NSRange )arg0 atPoint:(struct CGPoint )arg1 ;


@end


#endif