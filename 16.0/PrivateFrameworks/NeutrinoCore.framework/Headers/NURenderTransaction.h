// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NURENDERTRANSACTION_H
#define NURENDERTRANSACTION_H

@class NSMutableArray, NSArray;
@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface NURenderTransaction : NSObject {
    NSInteger _nestingLevel;
    NSMutableArray *_requests;
    NSObject<OS_dispatch_group> *_group;
}


@property (readonly) NSArray *pendingRequests;


+(id)assertCurrentTransaction;
+(id)currentTransaction;
+(id)ensureCurrentTransaction;
+(void)_commit:(id)arg0 ;
+(void)begin;
+(void)commit;
+(void)commitAndNotifyOnQueue:(id)arg0 withBlock:(id)arg1 ;
+(void)group:(id)arg0 ;
+(void)setCurrentTransaction:(id)arg0 ;
+(void)withCurrentTransaction:(id)arg0 ;
-(BOOL)begin;
-(BOOL)commit;
-(id)init;
-(void)flush;
-(void)notifyCompletion:(id)arg0 block:(id)arg1 ;
-(void)submitPendingRequests;
-(void)submitRequest:(id)arg0 ;


@end


#endif