// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSJSONROUNDTRIPPINGNUMBER_H
#define _NSJSONROUNDTRIPPINGNUMBER_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSNumber.h"
#import "NSString.h"

@interface _NSJSONRoundTrippingNumber : NSObject <NSSecureCoding>

 {
    NSNumber *_number;
    NSString *_representation;
}




+(BOOL)instancesRespondToSelector:(SEL)arg0 ;
+(BOOL)isSubclassOfClass:(Class)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)instanceMethodSignatureForSelector:(SEL)arg0 ;
-(BOOL)_allowsDirectEncoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNumber:(id)arg0 ;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(BOOL)isNSNumber__;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(Class)superclass;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNumber:(id)arg0 representation:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)stringValue;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif