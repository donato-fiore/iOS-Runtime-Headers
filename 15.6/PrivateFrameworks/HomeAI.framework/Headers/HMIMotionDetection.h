// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIMOTIONDETECTION_H
#define HMIMOTIONDETECTION_H

@class HMFObject;



@interface HMIMotionDetection : HMFObject

@property (readonly) CGRect boundingBox; // ivar: _boundingBox


-(BOOL)applyEventTypeAndCheckIfSubBoundingIsStatic:(struct CGRect )arg0 forMetric:(NSInteger)arg1 eventClass:(Class)arg2 confidence:(float)arg3 ;
-(id)initWithBoundingBox:(struct CGRect )arg0 ;


@end


#endif