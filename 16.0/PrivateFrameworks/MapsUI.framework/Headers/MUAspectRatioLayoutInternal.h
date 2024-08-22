// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUASPECTRATIOLAYOUTINTERNAL_H
#define MUASPECTRATIOLAYOUTINTERNAL_H

@protocol MULayoutItem;


#import "MUConstraintLayoutInternal.h"

@interface MUAspectRatioLayoutInternal : MUConstraintLayoutInternal {
    ? builder;
}


@property (nonatomic) CGFloat aspectRatio;
@property (nonatomic, weak) NSObject<MULayoutItem> *item;


-(id)initWithItem:(id)arg0 aspectRatio:(CGFloat)arg1 ;


@end


#endif