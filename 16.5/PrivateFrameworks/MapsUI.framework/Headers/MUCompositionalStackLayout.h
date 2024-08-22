// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUCOMPOSITIONALSTACKLAYOUT_H
#define MUCOMPOSITIONALSTACKLAYOUT_H

@protocol MULayoutItem;


#import "MUConstraintLayout.h"
#import "MUCompositionalStackLayoutInternal.h"
#import "MUCompositionalStackLayoutGroup.h"

@interface MUCompositionalStackLayout : MUConstraintLayout {
    MUCompositionalStackLayoutInternal *_internal;
}


@property (weak, nonatomic) NSObject<MULayoutItem> *container;
@property (copy, nonatomic) MUCompositionalStackLayoutGroup *group; // ivar: _group


-(id)initWithContainer:(id)arg0 group:(id)arg1 ;


@end


#endif