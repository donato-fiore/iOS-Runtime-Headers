// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __NSCFERROR_H
#define __NSCFERROR_H

@class NSCFType;



@interface __NSCFError : NSCFType



+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)isEqual:(id)arg0 ;
-(Class)classForCoder;
-(NSInteger)code;
-(NSUInteger)hash;
-(NSUInteger)retainCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)domain;
-(id)initWithCoder:(id)arg0 ;
-(id)retain;
-(id)userInfo;
-(void)release;


@end


#endif