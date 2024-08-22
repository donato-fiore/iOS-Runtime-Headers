// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKASSERTION_H
#define NPKASSERTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NPKAssertion : NSObject

@property (readonly, nonatomic, getter=isAcquired) BOOL acquired;
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) NSUInteger state; // ivar: _state
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)_errorWithUnderlyingError:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 reason:(id)arg1 ;
-(void)acquireWithCompletion:(id)arg0 ;
-(void)invalidateWithCompletion:(id)arg0 ;


@end


#endif