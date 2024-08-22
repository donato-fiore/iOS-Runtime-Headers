// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUCOMPOSITIONALSTACKLAYOUTINTERNAL_H
#define MUCOMPOSITIONALSTACKLAYOUTINTERNAL_H

@protocol MULayoutItem;


#import "MUConstraintLayoutInternal.h"
#import "MUCompositionalStackLayoutGroupInternal.h"

@interface MUCompositionalStackLayoutInternal : MUConstraintLayoutInternal {
    ? builder;
}


@property (nonatomic, weak) NSObject<MULayoutItem> *container;
@property (nonatomic, retain) MUCompositionalStackLayoutGroupInternal *group;


-(id)initWithContainer:(id)arg0 group:(id)arg1 ;


@end


#endif