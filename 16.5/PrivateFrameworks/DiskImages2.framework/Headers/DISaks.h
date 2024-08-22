// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DISAKS_H
#define DISAKS_H

@class NSString;

#import <Foundation/Foundation.h>

#import "DIURL.h"

@interface DISaks : NSObject

@property (readonly, nonatomic) DIURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSString *appStr; // ivar: _appStr


+(BOOL)decryptKeyWithData:(id)arg0 destKey:(char *)arg1 destKeySize:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)hintFormat:(id)arg0 ;
+(id)newACEndpointWithEnvironment:(id)arg0 error:(*id)arg1 ;
+(id)newAPIWithError:(*id)arg0 ;
+(id)newDawTokenWithError:(*id)arg0 ;
+(id)newEnvWithDictionary:(id)arg0 error:(*id)arg1 ;
+(id)newSessionWithError:(*id)arg0 ;
+(id)newUrl:(id)arg0 api:(id)arg1 ;
+(id)request:(id)arg0 session:(id)arg1 json:(id)arg2 error:(*id)arg3 ;
+(id)requestSynchronousDataWithRequest:(id)arg0 session:(id)arg1 ;


@end


#endif