// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGIOSURFACEDATA_H
#define FIGIOSURFACEDATA_H

@class NSData;



@interface FigIOSurfaceData : NSData {
    *__IOSurface _surface;
    NSUInteger _length;
    *void _bytes;
}




+(id)dataWithIOSurface:(struct __IOSurface *)arg0 ;
+(id)dataWithIOSurface:(struct __IOSurface *)arg0 length:(NSUInteger)arg1 ;
+(void)initialize;
-(*void)bytes;
-(NSUInteger)length;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIOSurface:(struct __IOSurface *)arg0 ;
-(id)initWithIOSurface:(struct __IOSurface *)arg0 length:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif