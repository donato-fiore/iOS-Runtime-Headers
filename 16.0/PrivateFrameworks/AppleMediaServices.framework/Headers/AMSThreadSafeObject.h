// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSTHREADSAFEOBJECT_H
#define AMSTHREADSAFEOBJECT_H


#import <Foundation/Foundation.h>


@interface AMSThreadSafeObject : NSObject

@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (retain, nonatomic) id *underlyingObject; // ivar: _underlyingObject


-(id)accessAndSetObjectWithBlock:(id)arg0 ;
-(id)init;
-(id)initWithObject:(id)arg0 ;
-(id)object;
-(void)read:(id)arg0 ;
-(void)readWrite:(id)arg0 ;
-(void)setObject:(id)arg0 ;


@end


#endif