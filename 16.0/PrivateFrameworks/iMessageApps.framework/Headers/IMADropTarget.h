// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMADROPTARGET_H
#define IMADROPTARGET_H


#import <Foundation/Foundation.h>


@interface IMADropTarget : NSObject

@property (readonly, nonatomic) CGSize initialSize; // ivar: _initialSize
@property (readonly, nonatomic) CGFloat meshScaleFactor; // ivar: _meshScaleFactor
@property (readonly, nonatomic) CGFloat rotation; // ivar: _rotation
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) CGPoint screenCoordinate; // ivar: _screenCoordinate


-(id)description;
-(id)initWithScreenCoordinate:(struct CGPoint )arg0 initialSize:(struct CGSize )arg1 scale:(CGFloat)arg2 meshScaleFactor:(CGFloat)arg3 rotation:(CGFloat)arg4 ;


@end


#endif