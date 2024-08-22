// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCRCGESTURESTYLUS_H
#define SCRCGESTURESTYLUS_H



#import "SCRCGestureFinger.h"

@interface SCRCGestureStylus : SCRCGestureFinger {
    CGFloat _altitude;
    CGFloat _azimuth;
}




-(CGFloat)altitude;
-(CGFloat)azimuth;
-(NSInteger)type;
-(id)initWithIdentifier:(NSUInteger)arg0 location:(struct CGPoint )arg1 pressure:(CGFloat)arg2 altitude:(CGFloat)arg3 azimuth:(CGFloat)arg4 ;


@end


#endif