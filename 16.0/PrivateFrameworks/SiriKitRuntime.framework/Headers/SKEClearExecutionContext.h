// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKECLEAREXECUTIONCONTEXT_H
#define SKECLEAREXECUTIONCONTEXT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKEClearExecutionContext : NSObject <NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif