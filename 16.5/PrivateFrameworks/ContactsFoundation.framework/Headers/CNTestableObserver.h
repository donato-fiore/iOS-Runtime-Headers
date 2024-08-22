// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNTESTABLEOBSERVER_H
#define CNTESTABLEOBSERVER_H

@class NSString, NSArray;
@protocol CNObserver;

#import <Foundation/Foundation.h>

#import "CNVirtualScheduler.h"
#import "CNObservableContractEnforcement.h"

@interface CNTestableObserver : NSObject <CNObserver>

 {
    CNVirtualScheduler *_scheduler;
    CNObservableContractEnforcement *_enforcement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSArray *resultValues;
@property (readonly) NSArray *results; // ivar: _results
@property (readonly) Class superclass;


+(id)observerWithScheduler:(id)arg0 ;
-(id)initWithScheduler:(id)arg0 ;
-(void)observerDidComplete;
-(void)observerDidFailWithError:(id)arg0 ;
-(void)observerDidReceiveResult:(id)arg0 ;


@end


#endif