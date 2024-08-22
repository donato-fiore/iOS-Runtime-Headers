// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISEPERTYPEEDGESFAILGESTUREFEATURE_H
#define _UISEPERTYPEEDGESFAILGESTUREFEATURE_H

@class UISEGestureFeature, NSString, NSDictionary;
@protocol _UISEGestureFeatureDelegate, _UISETouchedEdgesProvider;



@interface _UISEPerTypeEdgesFailGestureFeature : UISEGestureFeature <_UISEGestureFeatureDelegate, _UISETouchedEdgesProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *edgeTypeSubfeatures; // ivar: _edgeTypeSubfeatures
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger touchedEdges;


-(id)debugDictionary;
-(id)initWithEdgeTypeSubfeatures:(id)arg0 ;
-(void)_incorporateSample:(struct _UISEGestureFeatureSample *)arg0 ;
-(void)featureDidChangeState:(id)arg0 ;


@end


#endif