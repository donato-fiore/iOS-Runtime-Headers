// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASTENVIRONMENT_H
#define ASTENVIRONMENT_H

@class NSNumber, NSString, NSURL;

#import <Foundation/Foundation.h>


@interface ASTEnvironment : NSObject

@property (retain, nonatomic) NSNumber *SOCKSProxyPort; // ivar: _SOCKSProxyPort
@property (retain, nonatomic) NSString *SOCKSProxyServer; // ivar: _SOCKSProxyServer
@property (nonatomic) NSUInteger environmentType; // ivar: _environmentType
@property (nonatomic) NSUInteger server; // ivar: _server
@property (retain, nonatomic) NSURL *serverURL; // ivar: _serverURL


+(BOOL)isInternalBuild;
+(id)currentEnvironment;
+(id)environmentWithEnvironmentType:(NSUInteger)arg0 ;
+(void)resetEnvironment;
-(NSUInteger)_defaultServerSelection;
-(id)_defaultServerURL;
-(id)_environmentServerString;
-(id)_generateServerURL;
-(id)init;
-(id)initWithEnvironmentType:(NSUInteger)arg0 ;


@end


#endif