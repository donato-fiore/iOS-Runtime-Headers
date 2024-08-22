// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUSIZELAYOUTINTERNAL_H
#define MUSIZELAYOUTINTERNAL_H

@protocol MULayoutItem;


#import "MUConstraintLayoutInternal.h"

@interface MUSizeLayoutInternal : MUConstraintLayoutInternal {
    ? builder;
}


@property (nonatomic, weak) NSObject<MULayoutItem> *item;
@property (nonatomic) float priority;
@property (nonatomic) CGSize size;


+(CGFloat)useIntrinsicContentSize;
-(id)initWithItem:(id)arg0 size:(struct CGSize )arg1 ;
-(id)initWithItem:(id)arg0 size:(struct CGSize )arg1 priority:(float)arg2 ;


@end


#endif