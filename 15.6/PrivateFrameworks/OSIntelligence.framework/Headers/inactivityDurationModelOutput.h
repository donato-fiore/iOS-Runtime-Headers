// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INACTIVITYDURATIONMODELOUTPUT_H
#define INACTIVITYDURATIONMODELOUTPUT_H

@class NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface inactivityDurationModelOutput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (nonatomic) CGFloat predicted_duration; // ivar: _predicted_duration


-(id)featureValueForName:(id)arg0 ;
-(id)initWithPredicted_duration:(CGFloat)arg0 ;


@end


#endif