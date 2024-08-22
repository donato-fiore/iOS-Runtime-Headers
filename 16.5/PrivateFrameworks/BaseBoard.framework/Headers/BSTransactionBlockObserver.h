// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSTRANSACTIONBLOCKOBSERVER_H
#define BSTRANSACTIONBLOCKOBSERVER_H

@class NSMutableArray, NSString;
@protocol BSTransactionObserver;

#import <Foundation/Foundation.h>


@interface BSTransactionBlockObserver : NSObject <BSTransactionObserver>

 {
    NSMutableArray *_willBeginBlocks;
    NSMutableArray *_didBeginBlocks;
    NSMutableArray *_didFinishWorkBlocks;
    NSMutableArray *_didCompleteBlocks;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)addTransactionDidBeginBlock:(id)arg0 ;
-(void)addTransactionDidCompleteBlock:(id)arg0 ;
-(void)addTransactionDidFinishWorkBlock:(id)arg0 ;
-(void)addTransactionWillBeginBlock:(id)arg0 ;
-(void)transactionDidBegin:(id)arg0 ;
-(void)transactionDidComplete:(id)arg0 ;
-(void)transactionDidFinishWork:(id)arg0 ;
-(void)transactionWillBegin:(id)arg0 ;


@end


#endif