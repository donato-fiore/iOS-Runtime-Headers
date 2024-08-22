// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC21PERSONALUNDERSTANDING28MODEOFTRANSITPREFERENCEINPUT_H
#define _TTC21PERSONALUNDERSTANDING28MODEOFTRANSITPREFERENCEINPUT_H

@class SwiftObject, NSSet;
@protocol MLFeatureProvider;



@interface _TtC21PersonalUnderstanding28ModeOfTransitPreferenceInput : SwiftObject <MLFeatureProvider>

 {
    ? transit_count_cycling;
    ? transit_count_walking;
    ? transit_count_driving;
    ? transit_duration_cycling;
    ? transit_duration_walking;
    ? transit_duration_driving;
}


@property (nonatomic, readonly) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;


@end


#endif