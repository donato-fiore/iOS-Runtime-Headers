// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AOSTRANSACTION_H
#define AOSTRANSACTION_H

@class NSConditionLock;
@protocol NSCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AOSTransaction : NSObject <NSCoding>

 {
    unsigned char didSucceed;
    unsigned char didFinish;
    *void result;
    *__CFError error;
    *unk callbackFunction;
    id *callbackBlock;
    NSObject<OS_dispatch_queue> *callbackQueue;
    *void context;
    NSConditionLock *waitLock;
    *unk contextRetain;
    *unk contextRelease;
}




-(BOOL)isSuccessful;
-(id)error;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)result;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finalize;


@end


#endif