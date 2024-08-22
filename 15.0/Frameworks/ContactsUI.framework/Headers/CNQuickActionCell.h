// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNQUICKACTIONCELL_H
#define CNQUICKACTIONCELL_H

@class UICollectionViewCell;


#import "CNQuickActionButton.h"

@interface CNQuickActionCell : UICollectionViewCell

@property (retain, nonatomic) CNQuickActionButton *button; // ivar: _button
@property (nonatomic) BOOL showBackgroundPlatter; // ivar: _showBackgroundPlatter
@property (nonatomic) BOOL showTitle; // ivar: _showTitle


-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif