// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AOSCONTEXT_H
#define AOSCONTEXT_H

@class NSThread, NSString;
@protocol NSPortDelegate;

#import <Foundation/Foundation.h>


@interface AOSContext : NSObject <NSPortDelegate>

 {
    *AOSAccount _account;
    *AOSTransactionC _transaction;
    *unk _callback;
    NSThread *_callbackThread;
    id *_info;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)contextWithAccount:(struct AOSAccount *)arg0 andTransaction:(struct AOSTransactionC *)arg1 ;
-(BOOL)scheduleCallback;
-(id)_callbackThread;
-(id)info;
-(id)init;
-(struct AOSAccount *)account;
-(struct AOSTransactionC *)transaction;
-(void)_performCallback;
-(void)dealloc;
-(void)finalize;
-(void)setAccount:(struct AOSAccount *)arg0 ;
-(void)setInfo:(id)arg0 ;
-(void)setTransaction:(struct AOSTransactionC *)arg0 ;


@end


#endif