// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMACCURACYOVERLAY_H
#define FMACCURACYOVERLAY_H

@class MKCircle;
@protocol MKAnnotation;



@interface FMAccuracyOverlay : MKCircle

@property (nonatomic) CGFloat horizontalAccuracy; // ivar: _horizontalAccuracy
@property (weak, nonatomic) NSObject<MKAnnotation> *parentAnnotation; // ivar: _parentAnnotation


-(id)description;


@end


#endif