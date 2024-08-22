// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCUSTOMSTACKLAYOUT_H
#define AVCUSTOMSTACKLAYOUT_H

@class NSString, NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface AVCustomStackLayout : NSObject

@property (copy, nonatomic) NSString *debugIdentifier; // ivar: _debugIdentifier
@property (retain, nonatomic) NSArray *rowHeads; // ivar: _rowHeads
@property (retain, nonatomic) NSMutableArray *rowSpacing; // ivar: _rowSpacing


-(CGFloat)_heightForRow:(NSUInteger)arg0 startingFrom:(id)arg1 inBoundingSize:(struct CGSize )arg2 ;
-(CGFloat)layoutHeightThatFitsRowsStartingWithRow:(NSUInteger)arg0 ;
-(id)_flexibleWidthMapForLayoutItemsBeginningWithLayoutItem:(id)arg0 endingWithItem:(id)arg1 withAvailableSize:(struct CGSize )arg2 ;
-(id)_lastVisibleLayoutItemAttributesFrom:(id)arg0 ;
-(id)init;
-(id)initWithLayoutRowHeads:(id)arg0 ;
-(id)itemsThatFitSize:(struct CGSize )arg0 ;
-(id)layoutFramesInBoundingSize:(struct CGSize )arg0 ;
-(id)prioritizedSizeThatFitsSize:(struct CGSize )arg0 ;


@end


#endif