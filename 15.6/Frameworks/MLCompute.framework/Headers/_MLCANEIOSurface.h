// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MLCANEIOSURFACE_H
#define _MLCANEIOSURFACE_H

@class _ANEIOSurfaceObject, NSDictionary;

#import <Foundation/Foundation.h>


@interface _MLCANEIOSurface : NSObject

@property (readonly, retain, nonatomic) _ANEIOSurfaceObject *ioSurfaceObject; // ivar: _ioSurfaceObject
@property (readonly, retain, nonatomic) NSDictionary *liveIOStatus; // ivar: _liveIOStatus


+(id)objectWithDataLength:(NSUInteger)arg0 liveIOStatus:(id)arg1 ;
+(void)initialize;
-(id)aneIOSurfaceObjectWithDataLength:(NSUInteger)arg0 ;
-(id)initWithDataLength:(NSUInteger)arg0 liveIOStatus:(id)arg1 ;
-(struct __IOSurface *)createIOSurface1x1WithLength:(NSUInteger)arg0 ;


@end


#endif