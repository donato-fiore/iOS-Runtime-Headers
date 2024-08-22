// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISEANYGESTUREFEATURE_H
#define _UISEANYGESTUREFEATURE_H

@class UISEGestureFeature, NSString, NSArray;
@protocol _UISEGestureFeatureDelegate;



@interface _UISEAnyGestureFeature : UISEGestureFeature <_UISEGestureFeatureDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *subfeatures; // ivar: _subfeatures
@property (readonly) Class superclass;


-(id)debugDictionary;
-(id)initWithSubfeatures:(id)arg0 ;
-(void)_incorporateSample:(struct _UISEGestureFeatureSample *)arg0 ;
-(void)featureDidChangeState:(id)arg0 ;


@end


#endif