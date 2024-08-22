// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCFERROR_H
#define NSCFERROR_H



#import "NSError.h"

@interface NSCFError : NSError



+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(BOOL)allowsWeakReference;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)retainWeakReference;
-(Class)classForCoder;
-(NSInteger)code;
-(NSUInteger)hash;
-(NSUInteger)retainCount;
-(id)domain;
-(id)initWithCoder:(id)arg0 ;
-(id)retain;
-(id)userInfo;
-(void)release;


@end


#endif