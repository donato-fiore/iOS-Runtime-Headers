// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKBROWSERDRAGCONTROLLERTARGET_H
#define CKBROWSERDRAGCONTROLLERTARGET_H


#import <Foundation/Foundation.h>


@interface CKBrowserDragControllerTarget : NSObject

@property (nonatomic) NSUInteger associatedLayoutIntent; // ivar: _associatedLayoutIntent
@property (nonatomic) CGSize initialSize; // ivar: _initialSize
@property (nonatomic) CGFloat meshScaleFactor; // ivar: _meshScaleFactor
@property (nonatomic) CGFloat rotation; // ivar: _rotation
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) CGPoint screenCoordiante; // ivar: _screenCoordiante


+(id)targetWithScreenCoordiante:(struct CGPoint )arg0 initialSize:(struct CGSize )arg1 scale:(CGFloat)arg2 meshScaleFactor:(CGFloat)arg3 rotation:(CGFloat)arg4 associatedLayoutIntent:(NSUInteger)arg5 ;
-(id)description;


@end


#endif