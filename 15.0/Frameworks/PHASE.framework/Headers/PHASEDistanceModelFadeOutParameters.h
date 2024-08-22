// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASEDISTANCEMODELFADEOUTPARAMETERS_H
#define PHASEDISTANCEMODELFADEOUTPARAMETERS_H


#import <Foundation/Foundation.h>


@interface PHASEDistanceModelFadeOutParameters : NSObject

@property (readonly, nonatomic) CGFloat cullDistance; // ivar: _cullDistance
@property (readonly, nonatomic) CGFloat maximumDistance;


+(id)new;
-(id)init;
-(id)initWithCullDistance:(CGFloat)arg0 ;
-(id)initWithMaximumDistance:(CGFloat)arg0 fadeOutLength:(CGFloat)arg1 curveType:(NSInteger)arg2 ;


@end


#endif