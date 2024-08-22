// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKASSERTION_H
#define PKASSERTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKAssertion : NSObject {
    os_unfair_lock_s _invalidationLock;
}


@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL invalidateWhenBackgrounded; // ivar: _invalidateWhenBackgrounded
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(void)acquireAssertionOfType:(NSUInteger)arg0 withReason:(id)arg1 completion:(id)arg2 ;
+(void)isAssertionValid:(id)arg0 completion:(id)arg1 ;
+(void)preheatConnection;
-(id)description;
-(id)initWithType:(NSUInteger)arg0 identifier:(id)arg1 reason:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)markAsInvalidatedAndNotify;


@end


#endif