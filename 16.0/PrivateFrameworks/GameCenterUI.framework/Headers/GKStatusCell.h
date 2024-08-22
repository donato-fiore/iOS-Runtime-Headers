// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKSTATUSCELL_H
#define GKSTATUSCELL_H

@class UILabel;


#import "GKCollectionViewCell.h"

@interface GKStatusCell : GKCollectionViewCell

@property (retain, nonatomic) UILabel *statusLabel; // ivar: _statusLabel


-(BOOL)canRemoveItem;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)prepareForReuse;
-(void)setStatus:(id)arg0 ;


@end


#endif