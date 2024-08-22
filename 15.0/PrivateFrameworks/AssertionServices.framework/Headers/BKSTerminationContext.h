// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSTERMINATIONCONTEXT_H
#define BKSTERMINATIONCONTEXT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface BKSTerminationContext : NSObject <NSCopying>



@property (nonatomic) NSInteger exceptionCode; // ivar: _exceptionCode
@property (copy, nonatomic) NSString *explanation; // ivar: _explanation
@property (nonatomic) NSUInteger reportType; // ivar: _reportType


+(id)context;
+(id)terminationAssertionContext;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTerminationContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif