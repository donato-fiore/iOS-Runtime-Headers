// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGNAMEINVERSIONPREDICTOR_H
#define SGNAMEINVERSIONPREDICTOR_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface SGNameInversionPredictor : NSObject {
    NSDictionary *_tradToTrie;
    NSDictionary *_tradToInversionRate;
    CGFloat _confidenceThreshold;
}




+(BOOL)shouldInvertFirst:(id)arg0 last:(id)arg1 ;
+(id)sharedInstance;
-(BOOL)shouldInvertFirst:(id)arg0 last:(id)arg1 ;
-(BOOL)shouldInvertFirst:(id)arg0 last:(id)arg1 underNamingTradition:(id)arg2 ;
-(CGFloat)firstNameLikelihood:(id)arg0 underNamingTradition:(id)arg1 default:(CGFloat)arg2 ;
-(CGFloat)inversionRateForNamingTradition:(id)arg0 ;
-(id)init;


@end


#endif