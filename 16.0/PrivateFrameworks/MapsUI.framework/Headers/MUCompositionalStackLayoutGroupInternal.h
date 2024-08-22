// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUCOMPOSITIONALSTACKLAYOUTGROUPINTERNAL_H
#define MUCOMPOSITIONALSTACKLAYOUTGROUPINTERNAL_H

@class NSArray, NSString;
@protocol MUCompositionalStackLayoutItemInternal, NSCopying;

#import <Foundation/Foundation.h>


@interface MUCompositionalStackLayoutGroupInternal : NSObject <MUCompositionalStackLayoutItemInternal, NSCopying>

 {
    ? group;
}


@property (nonatomic) NSInteger alignment;
@property (nonatomic) BOOL alignmentBoundsContent;
@property (nonatomic) float alignmentFittingSizePriority;
@property (nonatomic, copy) NSArray *arrangedLayoutItems;
@property (nonatomic) NSInteger axis;
@property (nonatomic) NSInteger distribution;
@property (nonatomic) BOOL distributionBoundsContent;
@property (nonatomic) float distributionFittingSizePriority;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) NSDirectionalEdgeInsets insets;
@property (nonatomic) CGFloat spacing;


-(BOOL)alignmentBoundsContentForArrangedLayoutItem:(id)arg0 ;
-(BOOL)hasAlignmentForArrangedLayoutItem:(id)arg0 ;
-(NSInteger)alignmentForArrangedLayoutItem:(id)arg0 ;
-(float)alignmentFittingSizePriorityForArrangedLayoutItem:(id)arg0 ;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithAxis:(NSInteger)arg0 ;
-(id)initWithIdentifier:(id)arg0 axis:(NSInteger)arg1 ;
-(struct NSDirectionalEdgeInsets )paddingForArrangedLayoutItem:(id)arg0 ;
-(struct UIOffset )offsetForArrangedLayoutItem:(id)arg0 ;
-(void)addArrangedLayoutItem:(id)arg0 ;
-(void)disableAlignmentForArrangedLayoutItem:(id)arg0 ;
-(void)removeArrangedLayoutItem:(id)arg0 ;
-(void)setOffset:(struct UIOffset )arg0 forArrangedLayoutItem:(id)arg1 ;
-(void)setPadding:(struct NSDirectionalEdgeInsets )arg0 forArrangedLayoutItem:(id)arg1 ;


@end


#endif