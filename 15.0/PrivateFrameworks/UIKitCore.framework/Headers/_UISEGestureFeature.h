// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISEGESTUREFEATURE_H
#define _UISEGESTUREFEATURE_H

@protocol _UISEGestureFeatureDelegate;

#import <Foundation/Foundation.h>


@interface _UISEGestureFeature : NSObject

@property (weak, nonatomic) NSObject<_UISEGestureFeatureDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger state; // ivar: _state


-(id)debugDictionary;
-(void)_incorporateSample:(struct _UISEGestureFeatureSample *)arg0 ;
-(void)incorporateSample:(struct _UISEGestureFeatureSample *)arg0 ;


@end


#endif