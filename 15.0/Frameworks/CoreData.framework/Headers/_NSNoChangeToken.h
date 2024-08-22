// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSNOCHANGETOKEN_H
#define _NSNOCHANGETOKEN_H

@protocol NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _NSNoChangeToken : NSObject <NSCoding, NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(void)initialize;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)retain;
-(void)encodeWithCoder:(id)arg0 ;
-(void)release;


@end


#endif