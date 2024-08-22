// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKAUTHENTICATIONMACHINE_H
#define GKAUTHENTICATIONMACHINE_H

@class NSString;
@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface GKAuthenticationMachine : NSObject <NSCoding>



@property (retain, nonatomic) NSString *accountName; // ivar: _accountName
@property (nonatomic) NSInteger loginCancelledCount; // ivar: _loginCancelledCount
@property (nonatomic) NSInteger serverEnvironment; // ivar: _serverEnvironment


+(BOOL)supportsSecureCoding;
+(id)authMachineForEnvironment:(NSInteger)arg0 ;
+(void)migratePreBlacktailAccountInformation;
+(void)migratePreSundanceAccountInformation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif