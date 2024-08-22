// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFRIDEOPTIONSLOADER_H
#define WFRIDEOPTIONSLOADER_H

@class NSString, NSMutableArray, CLPlacemark, WFIntentExecutor, NSError, NSArray;
@protocol WFDynamicEnumerationDataSource, WFActionEventObserver, WFRideOptionsLoaderDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WFPaymentMethodParameter.h"
#import "WFRideOptionParameter.h"

@interface WFRideOptionsLoader : NSObject <WFDynamicEnumerationDataSource, WFActionEventObserver>



@property (copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (readonly, nonatomic) NSMutableArray *completionBlocks; // ivar: _completionBlocks
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFRideOptionsLoaderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CLPlacemark *dropOffLocation; // ivar: _dropOffLocation
@property (retain, nonatomic) WFIntentExecutor *executor; // ivar: _executor
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSError *loadingOptionsError; // ivar: _loadingOptionsError
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *loadingOptionsQueue; // ivar: _loadingOptionsQueue
@property (nonatomic) NSUInteger loadingState; // ivar: _loadingState
@property (retain, nonatomic) WFPaymentMethodParameter *paymentMethodParameterParameter; // ivar: _paymentMethodParameterParameter
@property (copy, nonatomic) NSArray *paymentMethods; // ivar: _paymentMethods
@property (copy, nonatomic) CLPlacemark *pickupLocation; // ivar: _pickupLocation
@property (retain, nonatomic) WFRideOptionParameter *rideOptionParameterParameter; // ivar: _rideOptionParameterParameter
@property (copy, nonatomic) NSArray *rideOptions; // ivar: _rideOptions
@property (readonly) Class superclass;


-(id)enumeration:(id)arg0 localizedLabelForPossibleState:(id)arg1 ;
-(id)init;
-(void)action:(id)arg0 parameterStateDidChangeForKey:(id)arg1 ;
-(void)loadPossibleStatesForEnumeration:(id)arg0 searchTerm:(id)arg1 completionHandler:(id)arg2 ;
-(void)loadRideOptionsValueWithCompletion:(id)arg0 ;


@end


#endif