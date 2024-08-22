// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLIOSURFACEDATA_H
#define PLIOSURFACEDATA_H

@class NSData;



@interface PLIOSurfaceData : NSData {
    *__IOSurface _surface;
    *void _bytes;
    NSUInteger _length;
}




+(id)dataWithIOSurface:(*void)arg0 ;
-(*void)bytes;
-(NSUInteger)length;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIOSurface:(*void)arg0 ;
-(id)initWithIOSurface:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif