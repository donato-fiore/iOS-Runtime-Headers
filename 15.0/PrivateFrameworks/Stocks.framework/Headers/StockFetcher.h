// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STOCKFETCHER_H
#define STOCKFETCHER_H

@class NSString, NSTimer;
@protocol SymbolValidatorDelegate;

#import <Foundation/Foundation.h>

#import "SymbolValidator.h"

@interface StockFetcher : NSObject <SymbolValidatorDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property CGFloat timeoutDuration; // ivar: _timeoutDuration
@property (retain, nonatomic) NSTimer *timeoutTimer; // ivar: _timeoutTimer
@property (retain) SymbolValidator *validator; // ivar: _validator


-(id)init;
-(id)initWithValidator:(id)arg0 ;
-(void)attemptRemoteFetchOfStockWithSymbol:(id)arg0 completionHandler:(id)arg1 ;
-(void)cleanUpAndReportResult:(id)arg0 ;
-(void)fetchStockWithSymbol:(id)arg0 completionHandler:(id)arg1 ;
-(void)remoteFetchTimedOut;
-(void)symbolValidator:(id)arg0 didFailWithError:(id)arg1 ;
-(void)symbolValidator:(id)arg0 didValidateSymbols:(id)arg1 ;


@end


#endif