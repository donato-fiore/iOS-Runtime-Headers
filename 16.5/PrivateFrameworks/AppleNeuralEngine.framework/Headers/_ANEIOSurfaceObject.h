// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ANEIOSURFACEOBJECT_H
#define _ANEIOSURFACEOBJECT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface _ANEIOSurfaceObject : NSObject

@property (readonly, nonatomic) *__IOSurface ioSurface; // ivar: _ioSurface
@property (readonly, nonatomic) NSNumber *startOffset; // ivar: _startOffset


+(id)new;
+(id)objectWithIOSurface:(struct __IOSurface *)arg0 ;
+(id)objectWithIOSurface:(struct __IOSurface *)arg0 startOffset:(id)arg1 ;
+(id)objectWithIOSurfaceNoRetain:(struct __IOSurface *)arg0 startOffset:(id)arg1 ;
+(struct __IOSurface *)createIOSurfaceWithWidth:(int)arg0 pixel_size:(int)arg1 height:(int)arg2 ;
+(struct __IOSurface *)createIOSurfaceWithWidth:(int)arg0 pixel_size:(int)arg1 height:(int)arg2 bytesPerElement:(int)arg3 ;
-(id)description;
-(id)init;
-(id)initWithIOSurface:(struct __IOSurface *)arg0 startOffset:(id)arg1 shouldRetain:(BOOL)arg2 ;
-(void)dealloc;


@end


#endif