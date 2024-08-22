// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRTEXTDETECTORMODELV3OUTPUT_H
#define CRTEXTDETECTORMODELV3OUTPUT_H

@class MLMultiArray, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface CRTextDetectorModelV3Output : NSObject <MLFeatureProvider>



@property (retain, nonatomic) MLMultiArray *affinity_score; // ivar: _affinity_score
@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *link_score; // ivar: _link_score
@property (retain, nonatomic) MLMultiArray *region_score; // ivar: _region_score
@property (retain, nonatomic) MLMultiArray *script_score; // ivar: _script_score


-(id)featureValueForName:(id)arg0 ;
-(id)initWithRegion_score:(id)arg0 affinity_score:(id)arg1 script_score:(id)arg2 link_score:(id)arg3 ;


@end


#endif