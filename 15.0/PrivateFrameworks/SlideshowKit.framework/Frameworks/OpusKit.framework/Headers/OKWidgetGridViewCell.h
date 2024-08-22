// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKWIDGETGRIDVIEWCELL_H
#define OKWIDGETGRIDVIEWCELL_H

@class UICollectionViewCell;


#import "OKWidgetView.h"

@interface OKWidgetGridViewCell : UICollectionViewCell

@property (retain, nonatomic) OKWidgetView *widgetView; // ivar: _widgetView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif