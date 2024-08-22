// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EFCANCELATIONTOKEN_H
#define EFCANCELATIONTOKEN_H

@class NSString;
@protocol EFCancelable;


#import "EFInvocationToken.h"

@interface EFCancelationToken : EFInvocationToken <EFCancelable>



@property (readonly, getter=isCanceled) BOOL canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)tokenWithCancelationBlock:(id)arg0 ;
+(id)tokenWithLabel:(id)arg0 cancelationBlock:(id)arg1 ;
-(void)addCancelable:(id)arg0 ;
-(void)addCancelationBlock:(id)arg0 ;
-(void)cancel;
-(void)removeAllCancelationBlocks;


@end


#endif