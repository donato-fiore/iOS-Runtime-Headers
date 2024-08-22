// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXPARALLAXCOMPONENTBEHAVIOR_H
#define SXPARALLAXCOMPONENTBEHAVIOR_H



#import "SXComponentBehavior.h"

@interface SXParallaxComponentBehavior : SXComponentBehavior

@property (readonly, nonatomic) int cachedDirection; // ivar: _cachedDirection
@property (readonly, nonatomic) int direction;
@property (readonly, nonatomic) CGFloat factor;


-(Class)handlerClassForComponent:(id)arg0 ;
-(int)directionWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif