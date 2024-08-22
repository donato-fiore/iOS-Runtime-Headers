// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSGRIDTEMPLATECOLLECTIONCELL_H
#define CPSGRIDTEMPLATECOLLECTIONCELL_H

@class UICollectionViewCell;


#import "CPSGridButton.h"

@interface CPSGridTemplateCollectionCell : UICollectionViewCell

@property (retain, nonatomic) CPSGridButton *button; // ivar: _button


+(id)reuseIdentifier;
-(BOOL)canBecomeFocused;
-(void)prepareForReuse;


@end


#endif