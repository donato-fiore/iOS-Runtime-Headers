// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSLAZYPROMISE_H
#define SSLAZYPROMISE_H

@class NSLock;


#import "SSPromise.h"

@interface SSLazyPromise : SSPromise

@property (copy, nonatomic) id *block; // ivar: _block
@property (retain, nonatomic) NSLock *executeBlockLock; // ivar: _executeBlockLock
@property (nonatomic) BOOL executedBlock; // ivar: _executedBlock


-(BOOL)_runBlock;
-(id)initWithBlock:(id)arg0 ;
-(id)resultBeforeDate:(id)arg0 error:(*id)arg1 ;
-(id)resultWithError:(*id)arg0 ;
-(id)resultWithTimeout:(CGFloat)arg0 error:(*id)arg1 ;
-(void)addErrorBlock:(id)arg0 ;
-(void)addSuccessBlock:(id)arg0 ;


@end


#endif