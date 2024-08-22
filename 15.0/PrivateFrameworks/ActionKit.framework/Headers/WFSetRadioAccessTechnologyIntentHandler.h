// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSETRADIOACCESSTECHNOLOGYINTENTHANDLER_H
#define WFSETRADIOACCESSTECHNOLOGYINTENTHANDLER_H

@class NSString;
@protocol WFSetRadioAccessTechnologyIntentHandling;

#import <Foundation/Foundation.h>


@interface WFSetRadioAccessTechnologyIntentHandler : NSObject <WFSetRadioAccessTechnologyIntentHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)smartDataModeEnabledForContext:(id)arg0 ;
-(id)client;
-(id)contexts;
-(id)dataRateToRadioAccessTechnologyModeMapping;
-(id)defaultContext;
-(id)defaultRatModeForSetRadioAccessTechnology:(id)arg0 ;
-(id)defaultSimForSetRadioAccessTechnology:(id)arg0 ;
-(id)labelForContext:(id)arg0 ;
-(id)labelForRadioAccessTechnologyMode:(NSInteger)arg0 context:(id)arg1 ;
-(id)modesFromDataRate:(NSInteger)arg0 ;
-(void)enumerateAvailableRadioAccessTechnologyModesForContext:(id)arg0 enumerationBlock:(id)arg1 ;
-(void)handleSetRadioAccessTechnology:(id)arg0 completion:(id)arg1 ;
-(void)provideRatModeOptionsCollectionForSetRadioAccessTechnology:(id)arg0 withCompletion:(id)arg1 ;
-(void)provideSimOptionsCollectionForSetRadioAccessTechnology:(id)arg0 withCompletion:(id)arg1 ;
-(void)setRadioAccessTechnologyMode:(NSInteger)arg0 forContext:(id)arg1 completion:(id)arg2 ;
-(void)setSmartDataMode:(BOOL)arg0 forContext:(id)arg1 ;


@end


#endif