// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKNAVIGATORCOLLECTIONVIEWCELL_H
#define OKNAVIGATORCOLLECTIONVIEWCELL_H

@class UICollectionViewCell;


#import "OKPageViewController.h"

@interface OKNavigatorCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) OKPageViewController *pageViewController; // ivar: _pageViewController


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif