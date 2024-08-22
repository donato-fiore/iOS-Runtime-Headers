// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSEXCEPTION_H
#define NSEXCEPTION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSDictionary.h"
#import "NSArray.h"

@interface NSException : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *name;
    NSString *reason;
    NSDictionary *userInfo;
    id *reserved;
}


@property (readonly, copy) NSArray *callStackReturnAddresses;
@property (readonly, copy) NSArray *callStackSymbols;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *reason;
@property (readonly, copy) NSDictionary *userInfo;


+(BOOL)supportsSecureCoding;
+(id)exceptionWithName:(id)arg0 reason:(id)arg1 userInfo:(id)arg2 ;
+(void)raise:(id)arg0 format:(id)arg1 ;
+(void)raise:(id)arg0 format:(id)arg1 arguments:(char *)arg2 ;
-(BOOL)_installStackTraceKeyIfNeeded;
-(BOOL)_isUnarchived;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 reason:(id)arg1 userInfo:(id)arg2 ;
-(id)redactedDescription;
-(void)_markAsUnarchived;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)raise;


@end


#endif