// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNOBSERVABLECONTRACTENFORCEMENT_H
#define CNOBSERVABLECONTRACTENFORCEMENT_H

@class NSString;
@protocol CNObserver;

#import <Foundation/Foundation.h>

#import "CNObservableContractTerminationContext.h"

@interface CNObservableContractEnforcement : NSObject <CNObserver>

 {
    NSUInteger _state;
    CNObservableContractTerminationContext *_terminationContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldEnforceRxProtocols;
+(BOOL)shouldSwizzleNilResults;
+(id)os_log;
-(void)observerDidComplete;
-(void)observerDidFailWithError:(id)arg0 ;
-(void)observerDidReceiveResult:(id)arg0 ;


@end


#endif