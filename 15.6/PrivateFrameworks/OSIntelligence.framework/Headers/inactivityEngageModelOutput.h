// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INACTIVITYENGAGEMODELOUTPUT_H
#define INACTIVITYENGAGEMODELOUTPUT_H

@class NSDictionary, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface inactivityEngageModelOutput : NSObject <MLFeatureProvider>



@property (retain, nonatomic) NSDictionary *classProbability; // ivar: _classProbability
@property (readonly, nonatomic) NSSet *featureNames;
@property (nonatomic) NSInteger is_long; // ivar: _is_long


-(id)featureValueForName:(id)arg0 ;
-(id)initWithIs_long:(NSInteger)arg0 classProbability:(id)arg1 ;


@end


#endif