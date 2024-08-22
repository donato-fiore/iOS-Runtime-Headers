// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUBOXLAYOUT_H
#define MUBOXLAYOUT_H

@class NSArray;
@protocol MULayoutItem;


#import "MUConstraintLayout.h"
#import "MUBoxLayoutInternal.h"

@interface MUBoxLayout : MUConstraintLayout {
    MUBoxLayoutInternal *_internal;
}


@property (copy, nonatomic) NSArray *arrangedLayoutItems;
@property (weak, nonatomic) NSObject<MULayoutItem> *container;
@property (nonatomic) NSInteger horizontalAlignment;
@property (nonatomic) BOOL horizontalAlignmentBoundsContent;
@property (nonatomic) float horizontalAlignmentFittingSizePriority;
@property (nonatomic) NSDirectionalEdgeInsets insets;
@property (nonatomic) NSInteger verticalAlignment;
@property (nonatomic) BOOL verticalAlignmentBoundsContent;
@property (nonatomic) float verticalAlignmentFittingSizePriority;


-(BOOL)hasHorizontalAlignmentForArrangedLayoutItem:(id)arg0 ;
-(BOOL)hasVerticalAlignmentForArrangedLayoutItem:(id)arg0 ;
-(BOOL)horizontalAlignmentBoundsContentForArrangedLayoutItem:(id)arg0 ;
-(BOOL)verticalAlignmentBoundsContentForArrangedLayoutItem:(id)arg0 ;
-(NSInteger)horizontalAlignmentForArrangedLayoutItem:(id)arg0 ;
-(NSInteger)verticalAlignmentForArrangedLayoutItem:(id)arg0 ;
-(float)horizontalFittingSizePriorityForArrangedLayoutItem:(id)arg0 ;
-(float)verticalFittingSizePriorityForArrangedLayoutItem:(id)arg0 ;
-(id)initWithContainer:(id)arg0 ;
-(struct NSDirectionalEdgeInsets )paddingForArrangedLayoutItem:(id)arg0 ;
-(struct UIOffset )offsetForArrangedLayoutItem:(id)arg0 ;
-(void)addArrangedLayoutItem:(id)arg0 ;
-(void)disableHorizontalAlignmentForArrangedLayoutItem:(id)arg0 ;
-(void)disableVerticalAlignmentForArrangedLayoutItem:(id)arg0 ;
-(void)removeArrangedLayoutItem:(id)arg0 ;
-(void)setHorizontalFittingSizePriority:(float)arg0 forArrangedLayoutItem:(id)arg1 ;
-(void)setOffset:(struct UIOffset )arg0 forArrangedLayoutItem:(id)arg1 ;
-(void)setPadding:(struct NSDirectionalEdgeInsets )arg0 forArrangedLayoutItem:(id)arg1 ;
-(void)setVerticalFittingSizePriority:(float)arg0 forArrangedLayoutItem:(id)arg1 ;


@end


#endif