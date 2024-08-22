// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CUTUNSAFEPROMISE_H
#define _CUTUNSAFEPROMISE_H

@class NSMutableArray;


#import "CUTUnsafePromise.h"
#import "CUTResult.h"

@interface _CUTUnsafePromise : CUTUnsafePromise

@property (nonatomic) BOOL done; // ivar: _done
@property (retain, nonatomic) CUTResult *result; // ivar: _result
@property (retain, nonatomic) NSMutableArray *resultBlocks; // ivar: _resultBlocks


-(id)init;
-(id)initWithResult:(id)arg0 ;
-(void)_fulfillWithResult:(id)arg0 ;
-(void)registerResultBlock:(id)arg0 ;


@end


#endif