// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNAUDIOQUALITYMODELOUTPUT_H
#define SNAUDIOQUALITYMODELOUTPUT_H

@class NSString, NSSet, NSDictionary;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface SNAudioQualityModelOutput : NSObject <MLFeatureProvider>



@property (retain, nonatomic) NSString *classLabel; // ivar: _classLabel
@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) NSDictionary *final_output; // ivar: _final_output


-(id)featureValueForName:(id)arg0 ;
-(id)initWithFinal_output:(id)arg0 classLabel:(id)arg1 ;


@end


#endif