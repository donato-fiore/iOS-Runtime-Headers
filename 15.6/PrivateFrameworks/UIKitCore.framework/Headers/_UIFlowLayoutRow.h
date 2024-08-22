// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFLOWLAYOUTROW_H
#define _UIFLOWLAYOUTROW_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "_UIFlowLayoutSection.h"

@interface _UIFlowLayoutRow : NSObject {
    BOOL _isValid;
    int _verticalAlignement;
    int _horizontalAlignement;
}


@property (nonatomic) CGFloat availableSpace; // ivar: _availableSpace
@property (nonatomic) BOOL complete; // ivar: _complete
@property (nonatomic) BOOL fixedItemSize; // ivar: _fixedItemSize
@property (nonatomic) NSInteger index; // ivar: _index
@property (readonly, nonatomic) NSMutableArray *items; // ivar: _items
@property (nonatomic) CGRect rowFrame; // ivar: _rowFrame
@property (nonatomic) CGSize rowSize; // ivar: _rowSize
@property (weak, nonatomic) _UIFlowLayoutSection *section; // ivar: _section


-(NSInteger)indexOfNearestItemAtPoint:(struct CGPoint )arg0 ;
-(id)copyFromSection:(id)arg0 ;
-(id)init;
-(id)snapshot;
-(void)addItem:(id)arg0 atEnd:(BOOL)arg1 ;
-(void)insertItem:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)invalidate;
-(void)layoutRow;
-(void)removeItemAtIndex:(NSInteger)arg0 ;


@end


#endif