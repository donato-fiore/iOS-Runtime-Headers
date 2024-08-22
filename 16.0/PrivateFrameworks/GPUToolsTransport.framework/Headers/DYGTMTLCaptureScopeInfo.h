// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DYGTMTLCAPTURESCOPEINFO_H
#define DYGTMTLCAPTURESCOPEINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DYGTMTLCaptureScopeInfo : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger commandQueueStreamRef; // ivar: _commandQueueStreamRef
@property (nonatomic) NSUInteger deviceAddress; // ivar: _deviceAddress
@property (nonatomic) NSUInteger deviceStreamRef; // ivar: _deviceStreamRef
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSUInteger scopeAddress; // ivar: _scopeAddress
@property (nonatomic) NSUInteger scopeStreamRef; // ivar: _scopeStreamRef


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif