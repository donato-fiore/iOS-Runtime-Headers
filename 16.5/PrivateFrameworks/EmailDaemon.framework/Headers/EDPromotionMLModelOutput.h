// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDPROMOTIONMLMODELOUTPUT_H
#define EDPROMOTIONMLMODELOUTPUT_H

@class NSSet, NSDictionary;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface EDPromotionMLModelOutput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (nonatomic) NSInteger promo; // ivar: _promo
@property (retain, nonatomic) NSDictionary *promoProbability; // ivar: _promoProbability


-(id)featureValueForName:(id)arg0 ;
-(id)initWithPromo:(NSInteger)arg0 promoProbability:(id)arg1 ;


@end


#endif