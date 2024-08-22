// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASTCONTEXT_H
#define ASTCONTEXT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ASTControlCommand.h"
#import "ASTIdentity.h"

@interface ASTContext : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger clientStatus; // ivar: _clientStatus
@property (nonatomic) NSInteger command; // ivar: _command
@property (readonly, nonatomic) ASTControlCommand *controlCommand; // ivar: _controlCommand
@property (readonly, copy, nonatomic) ASTIdentity *identity; // ivar: _identity
@property (nonatomic) BOOL testSuiteRunning; // ivar: _testSuiteRunning


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentity:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif