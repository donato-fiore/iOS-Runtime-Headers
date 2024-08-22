// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIPHYSICALCIRCLESANIMATIONREQUEST_H
#define SKUIPHYSICALCIRCLESANIMATIONREQUEST_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUIPhysicalCirclesAnimationRequest : NSObject <NSCopying>

 {
    id *_completionBlock;
}


@property (nonatomic) NSInteger animationType; // ivar: _animationType


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_setCompletionBlock:(id)arg0 ;
-(void)finishAnimation;


@end


#endif