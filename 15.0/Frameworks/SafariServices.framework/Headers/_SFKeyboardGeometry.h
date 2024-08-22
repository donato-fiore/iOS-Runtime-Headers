// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFKEYBOARDGEOMETRY_H
#define _SFKEYBOARDGEOMETRY_H


#import <Foundation/Foundation.h>


@interface _SFKeyboardGeometry : NSObject

@property (readonly, nonatomic) CGSize sizeWithBar; // ivar: _sizeWithBar
@property (readonly, nonatomic) CGSize sizeWithoutBar; // ivar: _sizeWithoutBar


+(id)_keyboardGeometryForCurrentDeviceWithInterfaceOrientation:(NSInteger)arg0 ;
+(id)keyboardGeometryForInterfaceOrientation:(NSInteger)arg0 ;
-(id)_initWithFallbackSizeForOrientation:(NSInteger)arg0 ;
-(id)_initWithSizeWithoutBar:(struct CGSize )arg0 sizeWithBar:(struct CGSize )arg1 ;


@end


#endif