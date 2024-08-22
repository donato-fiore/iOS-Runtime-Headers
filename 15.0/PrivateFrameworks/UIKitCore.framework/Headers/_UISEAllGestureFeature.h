// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISEALLGESTUREFEATURE_H
#define _UISEALLGESTUREFEATURE_H

@class UISEGestureFeature, NSMutableIndexSet, NSString, NSArray;
@protocol _UISEGestureFeatureDelegate;



@interface _UISEAllGestureFeature : UISEGestureFeature <_UISEGestureFeatureDelegate>

 {
    NSMutableIndexSet *_unrecognizedIndexes;
}


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