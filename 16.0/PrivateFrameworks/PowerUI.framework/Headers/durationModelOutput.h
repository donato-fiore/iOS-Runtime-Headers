// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DURATIONMODELOUTPUT_H
#define DURATIONMODELOUTPUT_H

@class NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface durationModelOutput : NSObject <MLFeatureProvider>



@property (nonatomic) CGFloat duration_pred; // ivar: _duration_pred
@property (readonly, nonatomic) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;
-(id)initWithDuration_pred:(CGFloat)arg0 ;


@end


#endif