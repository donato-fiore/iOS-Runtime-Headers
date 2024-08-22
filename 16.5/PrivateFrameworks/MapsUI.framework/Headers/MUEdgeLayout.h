// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUEDGELAYOUT_H
#define MUEDGELAYOUT_H

@protocol MULayoutItem;


#import "MUConstraintLayout.h"
#import "MUEdgeLayoutInternal.h"

@interface MUEdgeLayout : MUConstraintLayout {
    MUEdgeLayoutInternal *_internal;
}


@property (weak, nonatomic) NSObject<MULayoutItem> *container;
@property (nonatomic) NSUInteger edges;
@property (nonatomic) NSDirectionalEdgeInsets insets;
@property (weak, nonatomic) NSObject<MULayoutItem> *item;
@property (nonatomic) float priority;


-(id)initWithItem:(id)arg0 container:(id)arg1 ;
-(id)initWithItem:(id)arg0 container:(id)arg1 insets:(struct NSDirectionalEdgeInsets )arg2 ;
-(id)initWithItem:(id)arg0 container:(id)arg1 insets:(struct NSDirectionalEdgeInsets )arg2 edges:(NSUInteger)arg3 priority:(float)arg4 ;


@end


#endif