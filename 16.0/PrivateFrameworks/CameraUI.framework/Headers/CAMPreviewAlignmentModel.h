// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMPREVIEWALIGNMENTMODEL_H
#define CAMPREVIEWALIGNMENTMODEL_H

@class CMDeviceMotion;
@protocol CAMPreviewAlignmentModelObserver;

#import <Foundation/Foundation.h>


@interface CAMPreviewAlignmentModel : NSObject

@property (retain, nonatomic, setter=_setReferenceDeviceMotion:) CMDeviceMotion *_referenceDeviceMotion; // ivar: __referenceDeviceMotion
@property (nonatomic, getter=isAligned, setter=_setAligned:) BOOL aligned; // ivar: _aligned
@property (nonatomic, setter=_setAlignmentTransform:) CATransform3D alignmentTransform; // ivar: _alignmentTransform
@property (weak, nonatomic) NSObject<CAMPreviewAlignmentModelObserver> *observer; // ivar: _observer
@property (nonatomic, setter=_setOpacity:) CGFloat opacity; // ivar: _opacity


+(CGFloat)desiredUpdateInterval;
-(id)init;
-(void)applyDeviceMotion:(id)arg0 ;
-(void)reset;


@end


#endif