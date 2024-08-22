// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFPROMISE_H
#define NFPROMISE_H


#import <Foundation/Foundation.h>

#import "NFPromiseSeal.h"

@interface NFPromise : NSObject

@property (readonly) id *delay;
@property (readonly) id *delayOn;
@property (readonly) id *error;
@property (readonly) id *errorOn;
@property (readonly) id *pipe;
@property (readonly) id *pipeOn;
@property (readonly) id *resolve;
@property (readonly) id *resolveOn;
@property (retain, nonatomic) NFPromiseSeal *seal; // ivar: _seal
@property (readonly) id *then;
@property (readonly) id *thenOn;


+(id)asDelay:(CGFloat)arg0 onQueue:(id)arg1 withError:(id)arg2 ;
+(id)asDelay:(CGFloat)arg0 onQueue:(id)arg1 withValue:(id)arg2 ;
+(id)asDelay:(CGFloat)arg0 withError:(id)arg1 ;
+(id)asDelay:(CGFloat)arg0 withValue:(id)arg1 ;
+(id)asVoid;
+(id)asVoid:(id)arg0 ;
+(id)firstly:(id)arg0 ;
+(id)new;
-(id)always:(id)arg0 ;
-(id)alwaysOn:(id)arg0 always:(id)arg1 ;
-(id)error:(id)arg0 ;
-(id)errorOn:(id)arg0 error:(id)arg1 ;
-(id)init;
-(id)initWithError:(id)arg0 ;
-(id)initWithResolver:(id)arg0 ;
-(id)initWithValue:(id)arg0 ;
-(id)then:(id)arg0 ;
-(id)thenOn:(id)arg0 then:(id)arg1 ;
-(void)dealloc;


@end


#endif