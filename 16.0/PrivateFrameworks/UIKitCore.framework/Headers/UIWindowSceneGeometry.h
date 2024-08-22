// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIWINDOWSCENEGEOMETRY_H
#define UIWINDOWSCENEGEOMETRY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UIWindowSceneGeometry : NSObject <NSCopying>



@property (nonatomic, setter=_setInterfaceOrientation:) NSInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (nonatomic, setter=_setSystemFrame:) CGRect systemFrame; // ivar: _systemFrame


+(id)_calculateEffectiveGeometryForWindowScene:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif