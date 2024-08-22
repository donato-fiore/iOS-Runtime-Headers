// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKINKSMOOTHINGDESCRIPTOR_H
#define PKINKSMOOTHINGDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface PKInkSmoothingDescriptor : NSObject

@property (readonly, nonatomic) CGFloat angleSmoothing; // ivar: _angleSmoothing
@property (readonly, nonatomic) CGFloat radiusSmoothing; // ivar: _radiusSmoothing
@property (readonly, nonatomic) CGFloat stylusSmoothing; // ivar: _stylusSmoothing
@property (readonly, nonatomic) CGFloat touchSmoothing; // ivar: _touchSmoothing
@property (readonly, nonatomic) CGFloat velocitySmoothing; // ivar: _velocitySmoothing


-(id)initWithStylusSmoothing:(CGFloat)arg0 touch:(CGFloat)arg1 velocity:(CGFloat)arg2 angle:(CGFloat)arg3 radius:(CGFloat)arg4 ;
-(id)mutableCopy;


@end


#endif