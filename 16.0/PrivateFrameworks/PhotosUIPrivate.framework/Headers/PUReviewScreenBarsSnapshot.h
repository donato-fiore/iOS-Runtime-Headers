// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUREVIEWSCREENBARSSNAPSHOT_H
#define PUREVIEWSCREENBARSSNAPSHOT_H

@class UIView;



@interface PUReviewScreenBarsSnapshot : UIView

@property (nonatomic) CGAffineTransform transform;
@property (nonatomic) CGFloat zRotation; // ivar: _zRotation


+(Class)layerClass;
-(id)snapshotLayer;


@end


#endif