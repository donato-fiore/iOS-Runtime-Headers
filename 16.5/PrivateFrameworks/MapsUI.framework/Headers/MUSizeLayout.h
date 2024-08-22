// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUSIZELAYOUT_H
#define MUSIZELAYOUT_H

@protocol MULayoutItem;


#import "MUConstraintLayout.h"
#import "MUSizeLayoutInternal.h"

@interface MUSizeLayout : MUConstraintLayout {
    MUSizeLayoutInternal *_internal;
}


@property (weak, nonatomic) NSObject<MULayoutItem> *item;
@property (nonatomic) float priority;
@property (nonatomic) CGSize size;


+(CGFloat)useIntrinsicContentSize;
-(id)initWithItem:(id)arg0 size:(struct CGSize )arg1 ;
-(id)initWithItem:(id)arg0 size:(struct CGSize )arg1 priority:(float)arg2 ;


@end


#endif