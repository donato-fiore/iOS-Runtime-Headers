// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HLPURLSESSIONACAUTHCONTEXT_H
#define HLPURLSESSIONACAUTHCONTEXT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HLPURLSessionACAuthContext : NSObject <NSCopying>



@property (copy, nonatomic) NSString *appIdentifier; // ivar: _appIdentifier
@property (copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (copy, nonatomic) NSString *enviromentIdentifier; // ivar: _enviromentIdentifier
@property (copy, nonatomic) NSString *interactivityMode; // ivar: _interactivityMode


+(id)defaultContext;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAppIdentifier:(id)arg0 enviromentIdentifier:(id)arg1 interactivity:(id)arg2 ;


@end


#endif