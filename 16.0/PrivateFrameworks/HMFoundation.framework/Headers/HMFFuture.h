// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMFFUTURE_H
#define HMFFUTURE_H


#import <Foundation/Foundation.h>


@interface HMFFuture : NSObject

@property (readonly) _HMFFutureBlockOutcome outcomeIfSettled;
@property (readonly, getter=isPending) BOOL pending;


+(id)all:(id)arg0 ;
+(id)allSettled:(id)arg0 ;
+(id)any:(id)arg0 ;
+(id)anySettled:(id)arg0 ;
+(id)futureForOperation:(id)arg0 ;
+(id)futureWithDelay:(CGFloat)arg0 ;
+(id)futureWithError:(id)arg0 ;
+(id)futureWithNoValue;
+(id)futureWithPromise:(*id)arg0 ;
+(id)futureWithValue:(id)arg0 ;
+(id)inContext:(id)arg0 perform:(id)arg1 ;
-(BOOL)waitForResult:(*id)arg0 orError:(*id)arg1 withTimeout:(CGFloat)arg2 ;
-(id)description;
-(id)finally:(id)arg0 ;
-(id)ignoreErrors;
-(id)ignoreOutcome;
-(id)ignoreResult;
-(id)inContext:(id)arg0 finally:(id)arg1 ;
-(id)inContext:(id)arg0 recover:(id)arg1 ;
-(id)inContext:(id)arg0 then:(id)arg1 ;
// -(id)inContext:(id)arg0 then:(id)arg1 orRecover:(unk)arg2  ;
-(id)recover:(id)arg0 ;
-(id)then:(id)arg0 ;
// -(id)then:(id)arg0 orRecover:(unk)arg1  ;
-(id)timeout:(CGFloat)arg0 ;
-(void)getResultWithCompletion:(id)arg0 ;


@end


#endif