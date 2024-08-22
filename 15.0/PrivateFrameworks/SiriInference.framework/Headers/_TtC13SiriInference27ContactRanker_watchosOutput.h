// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC13SIRIINFERENCE27CONTACTRANKER_WATCHOSOUTPUT_H
#define _TTC13SIRIINFERENCE27CONTACTRANKER_WATCHOSOUTPUT_H

@class SwiftObject, NSSet;
@protocol MLFeatureProvider;



@interface _TtC13SiriInference27ContactRanker_watchosOutput : SwiftObject <MLFeatureProvider>

 {
    ? provider;
    ? $__lazy_storage_$_scores;
    ? $__lazy_storage_$_scoresShapedArray;
    ? $__lazy_storage_$_showToUser;
    ? $__lazy_storage_$_showToUserShapedArray;
    ? $__lazy_storage_$_topMatchIsConfident;
    ? $__lazy_storage_$_topMatchIsConfidentShapedArray;
}


@property (nonatomic, readonly) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;


@end


#endif