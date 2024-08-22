// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NFSECUREELEMENTLOGGINGSESSION_H
#define NFSECUREELEMENTLOGGINGSESSION_H

@class NSString;
@protocol NFSecureElementLoggingSessionCallbacks;


#import "NFSession.h"

@interface NFSecureElementLoggingSession : NFSession <NFSecureElementLoggingSessionCallbacks>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)clearLogs:(unsigned char)arg0 forSEID:(id)arg1 ;
-(id)enableSMBLogging:(BOOL)arg0 ;
-(id)getLogs:(unsigned char)arg0 forSEID:(id)arg1 error:(*id)arg2 ;
-(id)getSMBLogWithError:(*id)arg0 ;
-(id)storeACLogs:(id)arg0 ;


@end


#endif