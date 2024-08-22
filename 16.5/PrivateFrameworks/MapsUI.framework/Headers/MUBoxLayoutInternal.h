// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUBOXLAYOUTINTERNAL_H
#define MUBOXLAYOUTINTERNAL_H

@protocol MULayoutItem;


#import "MUConstraintLayoutInternal.h"

@interface MUBoxLayoutInternal : MUConstraintLayoutInternal {
    ? builder;
}


@property (nonatomic, weak) NSObject<MULayoutItem> *container;
@property (nonatomic) NSInteger horizontalAlignment;
@property (nonatomic) BOOL horizontalAlignmentBoundsContent;
@property (nonatomic) float horizontalAlignmentFittingSizePriority;
@property (nonatomic) NSDirectionalEdgeInsets insets;
@property (nonatomic) NSInteger verticalAlignment;
@property (nonatomic) BOOL verticalAlignmentBoundsContent;
@property (nonatomic) float verticalAlignmentFittingSizePriority;


-(id)initWithContainer:(id)arg0 ;


@end


#endif