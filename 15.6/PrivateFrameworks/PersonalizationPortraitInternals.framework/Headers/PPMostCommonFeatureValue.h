// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPMOSTCOMMONFEATUREVALUE_H
#define PPMOSTCOMMONFEATUREVALUE_H

@class NSCountedSet, NSString;
@protocol MLCustomModel;

#import <Foundation/Foundation.h>


@interface PPMostCommonFeatureValue : NSObject <MLCustomModel>

 {
    NSCountedSet *_itemCounts;
    NSString *_featureName;
    NSString *_dominantItemFeatureValueKey;
    NSString *_dominantItemCountFeatureValueKey;
}




-(id)_dominantItem;
-(id)initWithModelDescription:(id)arg0 parameterDictionary:(id)arg1 error:(*id)arg2 ;
-(id)itemCounts;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictionsFromBatch:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif