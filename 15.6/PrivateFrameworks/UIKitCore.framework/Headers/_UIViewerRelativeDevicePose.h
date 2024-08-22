// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIVIEWERRELATIVEDEVICEPOSE_H
#define _UIVIEWERRELATIVEDEVICEPOSE_H

@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>

#import "_UIMotionEffectAcceleratedOutputRange.h"

@interface _UIViewerRelativeDevicePose : NSObject <NSCopying, NSCoding>

 {
    _UIMotionEffectAcceleratedOutputRange *_acceleratedOutputRange;
}


@property (nonatomic) CGFloat planarRotationAngle; // ivar: _planarRotationAngle
@property (nonatomic) UIOffset viewerOffset; // ivar: _viewerOffset


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_acceleratedOutputRange;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(struct UIOffset )_acceleratedOutputForViewerOffset:(struct UIOffset )arg0 accelerationBoostFactor:(struct CGPoint )arg1 ;
-(void)_reset;
-(void)_setAcceleration:(struct CGPoint )arg0 fixingOutputForViewerOffset:(struct UIOffset )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif