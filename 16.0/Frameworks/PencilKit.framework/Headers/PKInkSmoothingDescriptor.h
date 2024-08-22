// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKINKSMOOTHINGDESCRIPTOR_H
#define PKINKSMOOTHINGDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface PKInkSmoothingDescriptor : NSObject

@property (readonly, nonatomic) CGFloat angleSmoothing; // ivar: _angleSmoothing
@property (readonly, nonatomic) CGFloat stylusSmoothing; // ivar: _stylusSmoothing
@property (readonly, nonatomic) CGFloat touchSmoothing; // ivar: _touchSmoothing
@property (readonly, nonatomic) CGFloat velocitySmoothing; // ivar: _velocitySmoothing


+(id)defaultSmoothingDescriptor;
+(id)smoothingDescriptorWithStylus:(CGFloat)arg0 touch:(CGFloat)arg1 velocity:(CGFloat)arg2 angle:(CGFloat)arg3 ;
-(id)initWithStylusSmoothing:(CGFloat)arg0 touchSmoothing:(CGFloat)arg1 velocitySmoothing:(CGFloat)arg2 angleSmoothing:(CGFloat)arg3 ;
-(id)mutableCopy;


@end


#endif