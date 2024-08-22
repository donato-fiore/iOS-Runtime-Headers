// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HDSPOSTRANSACTION_H
#define _HDSPOSTRANSACTION_H

@class NSString;
@protocol BSDescriptionProviding, HDSPAssertion, OS_dispatch_source, OS_os_transaction;

#import <Foundation/Foundation.h>


@interface _HDSPOSTransaction : NSObject <BSDescriptionProviding, HDSPAssertion>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger signpost_id; // ivar: _signpost_id
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer
@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction
@property (readonly, nonatomic) os_unfair_lock_s transactionLock; // ivar: _transactionLock


+(id)assertionWithIdentifier:(id)arg0 ;
+(id)assertionWithIdentifier:(id)arg0 timeout:(CGFloat)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 timeout:(CGFloat)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_locked_release;
-(void)_withLock:(id)arg0 ;
-(void)dealloc;
-(void)releaseAssertion;


@end


#endif