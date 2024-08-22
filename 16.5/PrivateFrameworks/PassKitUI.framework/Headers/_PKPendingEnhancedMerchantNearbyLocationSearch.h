// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PKPENDINGENHANCEDMERCHANTNEARBYLOCATIONSEARCH_H
#define _PKPENDINGENHANCEDMERCHANTNEARBYLOCATIONSEARCH_H

@class NSMutableArray, NSError, PKAccountEnhancedMerchant;

#import <Foundation/Foundation.h>


@interface _PKPendingEnhancedMerchantNearbyLocationSearch : NSObject {
    os_unfair_lock_s _lock;
    NSUInteger _state;
    NSMutableArray *_completionHandlers;
}


@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) PKAccountEnhancedMerchant *merchant; // ivar: _merchant
@property (readonly, nonatomic) NSUInteger state;


-(BOOL)isInProgress;
-(BOOL)isInTerminalState;
-(id)initWithMerchant:(id)arg0 ;
-(void)_callCompletionHandlers;
-(void)_updateState:(NSUInteger)arg0 error:(id)arg1 ;
-(void)addCompletionHandler:(id)arg0 ;
-(void)cancel;
-(void)didCompleteSuccessfully;
-(void)didFailWithError:(id)arg0 ;
-(void)didStart;


@end


#endif