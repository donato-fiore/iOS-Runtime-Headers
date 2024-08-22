// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONLAYOUTVISUALTREENODE_H
#define _UICOLLECTIONLAYOUTVISUALTREENODE_H

@class UICollectionLayoutVisualFormatItem, NSArray;



@interface _UICollectionLayoutVisualTreeNode : UICollectionLayoutVisualFormatItem

@property (nonatomic) NSUInteger axis; // ivar: _axis
@property (retain, nonatomic) NSArray *children; // ivar: _children


-(BOOL)isHorizontalGroup;
-(BOOL)isVerticalGroup;
-(id)description;
-(id)initWithParent:(id)arg0 children:(id)arg1 axis:(NSUInteger)arg2 ;


@end


#endif