// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEPROCESSIDENTITY_H
#define NEPROCESSIDENTITY_H

@class NSData, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NEProcessIdentity : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *auditTokenData; // ivar: _auditTokenData
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly, nonatomic) int pidVersion; // ivar: _pidVersion
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(id)initFromXPCConnection:(id)arg0 ;
-(id)initFromXPCMessage:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif