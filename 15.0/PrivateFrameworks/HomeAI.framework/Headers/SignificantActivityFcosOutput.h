// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIGNIFICANTACTIVITYFCOSOUTPUT_H
#define SIGNIFICANTACTIVITYFCOSOUTPUT_H

@class MLMultiArray, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface SignificantActivityFcosOutput : NSObject <MLFeatureProvider>



@property (retain, nonatomic) MLMultiArray *HomeSSD_box0_offset0; // ivar: _HomeSSD_box0_offset0
@property (retain, nonatomic) MLMultiArray *HomeSSD_box0_offset1; // ivar: _HomeSSD_box0_offset1
@property (retain, nonatomic) MLMultiArray *HomeSSD_box0_offset2; // ivar: _HomeSSD_box0_offset2
@property (retain, nonatomic) MLMultiArray *HomeSSD_box0_offset3; // ivar: _HomeSSD_box0_offset3
@property (retain, nonatomic) MLMultiArray *HomeSSD_box0_offset4; // ivar: _HomeSSD_box0_offset4
@property (retain, nonatomic) MLMultiArray *HomeSSD_box1_offset0; // ivar: _HomeSSD_box1_offset0
@property (retain, nonatomic) MLMultiArray *HomeSSD_box1_offset1; // ivar: _HomeSSD_box1_offset1
@property (retain, nonatomic) MLMultiArray *HomeSSD_box1_offset2; // ivar: _HomeSSD_box1_offset2
@property (retain, nonatomic) MLMultiArray *HomeSSD_box1_offset3; // ivar: _HomeSSD_box1_offset3
@property (retain, nonatomic) MLMultiArray *HomeSSD_box1_offset4; // ivar: _HomeSSD_box1_offset4
@property (retain, nonatomic) MLMultiArray *HomeSSD_class_prob0; // ivar: _HomeSSD_class_prob0
@property (retain, nonatomic) MLMultiArray *HomeSSD_class_prob1; // ivar: _HomeSSD_class_prob1
@property (retain, nonatomic) MLMultiArray *HomeSSD_class_prob2; // ivar: _HomeSSD_class_prob2
@property (retain, nonatomic) MLMultiArray *HomeSSD_class_prob3; // ivar: _HomeSSD_class_prob3
@property (retain, nonatomic) MLMultiArray *HomeSSD_class_prob4; // ivar: _HomeSSD_class_prob4
@property (retain, nonatomic) MLMultiArray *HomeSSD_object_roll0; // ivar: _HomeSSD_object_roll0
@property (retain, nonatomic) MLMultiArray *HomeSSD_object_roll1; // ivar: _HomeSSD_object_roll1
@property (retain, nonatomic) MLMultiArray *HomeSSD_object_roll2; // ivar: _HomeSSD_object_roll2
@property (retain, nonatomic) MLMultiArray *HomeSSD_object_roll3; // ivar: _HomeSSD_object_roll3
@property (retain, nonatomic) MLMultiArray *HomeSSD_object_roll4; // ivar: _HomeSSD_object_roll4
@property (retain, nonatomic) MLMultiArray *HomeSSD_object_yaw0; // ivar: _HomeSSD_object_yaw0
@property (retain, nonatomic) MLMultiArray *HomeSSD_object_yaw1; // ivar: _HomeSSD_object_yaw1
@property (retain, nonatomic) MLMultiArray *HomeSSD_object_yaw2; // ivar: _HomeSSD_object_yaw2
@property (retain, nonatomic) MLMultiArray *HomeSSD_object_yaw3; // ivar: _HomeSSD_object_yaw3
@property (retain, nonatomic) MLMultiArray *HomeSSD_object_yaw4; // ivar: _HomeSSD_object_yaw4
@property (readonly, nonatomic) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;
-(id)initWithHomeSSD_class_prob0:(id)arg0 HomeSSD_box0_offset0:(id)arg1 HomeSSD_box1_offset0:(id)arg2 HomeSSD_object_roll0:(id)arg3 HomeSSD_object_yaw0:(id)arg4 HomeSSD_class_prob1:(id)arg5 HomeSSD_box0_offset1:(id)arg6 HomeSSD_box1_offset1:(id)arg7 HomeSSD_object_roll1:(id)arg8 HomeSSD_object_yaw1:(id)arg9 HomeSSD_class_prob2:(id)arg10 HomeSSD_box0_offset2:(id)arg11 HomeSSD_box1_offset2:(id)arg12 HomeSSD_object_roll2:(id)arg13 HomeSSD_object_yaw2:(id)arg14 HomeSSD_class_prob3:(id)arg15 HomeSSD_box0_offset3:(id)arg16 HomeSSD_box1_offset3:(id)arg17 HomeSSD_object_roll3:(id)arg18 HomeSSD_object_yaw3:(id)arg19 HomeSSD_class_prob4:(id)arg20 HomeSSD_box0_offset4:(id)arg21 HomeSSD_box1_offset4:(id)arg22 HomeSSD_object_roll4:(id)arg23 HomeSSD_object_yaw4:(id)arg24 ;


@end


#endif