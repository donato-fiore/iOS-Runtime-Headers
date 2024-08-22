// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC21PERSONALUNDERSTANDING29MODEOFTRANSITPREFERENCEOUTPUT_H
#define _TTC21PERSONALUNDERSTANDING29MODEOFTRANSITPREFERENCEOUTPUT_H

@class SwiftObject, NSSet;
@protocol MLFeatureProvider;



@interface _TtC21PersonalUnderstanding29ModeOfTransitPreferenceOutput : SwiftObject <MLFeatureProvider>

 {
    ? provider;
    ? $__lazy_storage_$_walking_score;
    ? $__lazy_storage_$_cycling_score;
    ? $__lazy_storage_$_driving_score;
}


@property (nonatomic, readonly) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;


@end


#endif