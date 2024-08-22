// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CFXCOUNTERROTATIONVIEW_H
#define CFXCOUNTERROTATIONVIEW_H

@class UIView;



@interface CFXCounterRotationView : UIView

@property (nonatomic) CGAffineTransform transform;
@property (nonatomic) CGFloat zRotation; // ivar: _zRotation


+(Class)layerClass;
-(id)snapshotLayer;


@end


#endif