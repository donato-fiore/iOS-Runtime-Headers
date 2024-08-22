// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC13SIRIINFERENCE19CONTACTRANKEROUTPUT_H
#define _TTC13SIRIINFERENCE19CONTACTRANKEROUTPUT_H

@class SwiftObject, NSSet;
@protocol MLFeatureProvider;



@interface _TtC13SiriInference19ContactRankerOutput : SwiftObject <MLFeatureProvider>

 {
    ? provider;
    ? $__lazy_storage_$_scores;
    ? $__lazy_storage_$_showToUser;
    ? $__lazy_storage_$_topMatchIsConfident;
}


@property (nonatomic, readonly) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;


@end


#endif