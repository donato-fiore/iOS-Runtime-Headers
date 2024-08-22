// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFMAGICHEADMARKERVIEW_H
#define SFMAGICHEADMARKERVIEW_H

@class UIView;



@interface SFMagicHeadMarkerView : UIView {
    CGFloat _positionDegree;
    CGFloat _containerRadius;
}


@property (readonly) CGFloat currentOffset; // ivar: _currentOffset


-(id)initWithPositionDegree:(CGFloat)arg0 containerRadius:(CGFloat)arg1 ;
-(void)updateMarkerWithDegreeOffset:(CGFloat)arg0 ;


@end


#endif