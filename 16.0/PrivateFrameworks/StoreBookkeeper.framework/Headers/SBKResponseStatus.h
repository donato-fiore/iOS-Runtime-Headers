// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBKRESPONSESTATUS_H
#define SBKRESPONSESTATUS_H

@class NSString, NSError;

#import <Foundation/Foundation.h>


@interface SBKResponseStatus : NSObject

@property (readonly, copy, nonatomic) NSString *consoleDescription; // ivar: _consoleDescription
@property (readonly, nonatomic) BOOL isAuthenticationError;
@property (readonly, nonatomic) BOOL isError; // ivar: _isError
@property (readonly, nonatomic) BOOL isGenericError;
@property (readonly, nonatomic) BOOL isPuntedError; // ivar: _isPuntedError
@property (readonly, nonatomic) BOOL isRecoverable; // ivar: _isRecoverable
@property (readonly, nonatomic) BOOL isSuccess;
@property (readonly, nonatomic) BOOL isUnsupportedClient;
@property (readonly, nonatomic) BOOL isValidationError;
@property (readonly, nonatomic) NSError *requestError;
@property (readonly, nonatomic) BOOL shouldFileRadar; // ivar: _shouldFileRadar
@property (readonly, nonatomic) NSInteger statusCode; // ivar: _statusCode


+(id)responseStatusForStatusCodeNumber:(id)arg0 ;
-(id)initWithStatus:(NSInteger)arg0 isRecoverable:(BOOL)arg1 isError:(BOOL)arg2 consoleDescription:(id)arg3 shouldFileRadar:(BOOL)arg4 ;


@end


#endif