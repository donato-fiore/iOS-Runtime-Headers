// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFACTIONSETBUILDERPAIR_H
#define HFACTIONSETBUILDERPAIR_H

@class HMActionSet, HMActionSetBuilder;

#import <Foundation/Foundation.h>


@interface HFActionSetBuilderPair : NSObject

@property (readonly, nonatomic) HMActionSet *actionSet; // ivar: _actionSet
@property (readonly, nonatomic) HMActionSetBuilder *builder; // ivar: _builder


-(id)commitActionSetInHome:(id)arg0 ;
-(id)initWithActionSet:(id)arg0 builder:(id)arg1 ;
-(id)initWithBuilder:(id)arg0 ;


@end


#endif