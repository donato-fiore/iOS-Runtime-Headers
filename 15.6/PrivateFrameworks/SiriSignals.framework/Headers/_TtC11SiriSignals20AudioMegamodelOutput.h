// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC11SIRISIGNALS20AUDIOMEGAMODELOUTPUT_H
#define _TTC11SIRISIGNALS20AUDIOMEGAMODELOUTPUT_H

@class SwiftObject, NSSet;
@protocol MLFeatureProvider;



@interface _TtC11SiriSignals20AudioMegamodelOutput : SwiftObject <MLFeatureProvider>

 {
    ? provider;
    ? $__lazy_storage_$_disambiguation_mask;
    ? $__lazy_storage_$_is_requested_probability;
    ? $__lazy_storage_$_evaluation;
}


@property (nonatomic, readonly) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;


@end


#endif