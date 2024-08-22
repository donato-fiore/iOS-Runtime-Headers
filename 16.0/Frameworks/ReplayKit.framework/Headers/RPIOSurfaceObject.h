// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPIOSURFACEOBJECT_H
#define RPIOSURFACEOBJECT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RPIOSurfaceObject : NSObject <NSSecureCoding>

 {
    *__IOSurface _ioSurface;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(struct __IOSurface *)ioSurface;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setIOSurface:(struct __IOSurface *)arg0 ;


@end


#endif