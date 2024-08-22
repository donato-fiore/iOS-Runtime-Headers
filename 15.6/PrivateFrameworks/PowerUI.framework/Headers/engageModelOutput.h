// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENGAGEMODELOUTPUT_H
#define ENGAGEMODELOUTPUT_H

@class NSDictionary, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface engageModelOutput : NSObject <MLFeatureProvider>



@property (retain, nonatomic) NSDictionary *classProbability; // ivar: _classProbability
@property (nonatomic) NSInteger engage; // ivar: _engage
@property (readonly, nonatomic) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;
-(id)initWithEngage:(NSInteger)arg0 classProbability:(id)arg1 ;


@end


#endif