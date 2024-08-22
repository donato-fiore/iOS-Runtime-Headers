// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSBACKGROUNDCOMPONENT_H
#define CSBACKGROUNDCOMPONENT_H

@class NSNumber;


#import "CSComponent.h"

@interface CSBackgroundComponent : CSComponent

@property (nonatomic) NSNumber *style;
@property (nonatomic) CGFloat transitionProgress; // ivar: _transitionProgress


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)style:(id)arg0 ;


@end


#endif