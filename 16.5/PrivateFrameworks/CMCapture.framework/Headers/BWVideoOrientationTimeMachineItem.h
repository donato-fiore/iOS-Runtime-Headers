// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWVIDEOORIENTATIONTIMEMACHINEITEM_H
#define BWVIDEOORIENTATIONTIMEMACHINEITEM_H


#import <Foundation/Foundation.h>


@interface BWVideoOrientationTimeMachineItem : NSObject

@property (nonatomic) short exifOrientation; // ivar: _exifOrientation
@property (nonatomic) CGFloat ptsSeconds; // ivar: _ptsSeconds


-(id)description;
-(id)initWithPTSSeconds:(CGFloat)arg0 exifOrientation:(short)arg1 ;


@end


#endif