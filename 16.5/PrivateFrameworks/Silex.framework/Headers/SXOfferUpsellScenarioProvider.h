// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXOFFERUPSELLSCENARIOPROVIDER_H
#define SXOFFERUPSELLSCENARIOPROVIDER_H

@class NSString;
@protocol SXOfferUpsellScenarioProviding;

#import <Foundation/Foundation.h>


@interface SXOfferUpsellScenarioProvider : NSObject <SXOfferUpsellScenarioProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger offerUpsellScenario; // ivar: _offerUpsellScenario
@property (readonly) Class superclass;


-(id)init;
-(id)initWithOfferUpsellScenario:(NSInteger)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif