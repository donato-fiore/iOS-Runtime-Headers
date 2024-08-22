// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPCLIENTCONNECTION_H
#define CDPCLIENTCONNECTION_H

@class NSString, CDDebug;

#import <Foundation/Foundation.h>

#import "CDDXPCConnection.h"

@interface CDPClientConnection : NSObject

@property BOOL admissionOverride; // ivar: _admissionOverride
@property BOOL admissionResult; // ivar: _admissionResult
@property (readonly) NSString *clientName; // ivar: _clientName
@property (readonly) CDDXPCConnection *connection; // ivar: _connection
@property (readonly) CDDebug *debug; // ivar: _debug


-(BOOL)activitySignal:(id)arg0 error:(*id)arg1 replyHandler:(id)arg2 ;
-(BOOL)admissionCheckAndStartedForAttributes:(id)arg0 admissionId:(id)arg1 options:(id)arg2 error:(*id)arg3 replyHandler:(id)arg4 ;
-(BOOL)admissionSignoffForAttributes:(id)arg0 admissionId:(id)arg1 options:(id)arg2 error:(*id)arg3 replyHandler:(id)arg4 ;
-(BOOL)bootstrapWithError:(*id)arg0 replyHandler:(id)arg1 ;
-(BOOL)sendMessage:(NSInteger)arg0 withXPCdictionaryKey:(id)arg1 dictionary:(id)arg2 admissionId:(id)arg3 options:(id)arg4 error:(*id)arg5 replyHandler:(id)arg6 ;
-(BOOL)triggerWithConditions:(id)arg0 error:(*id)arg1 replyHandler:(id)arg2 ;
-(id)init;
-(id)initWithPluginName:(id)arg0 error:(*id)arg1 ;


@end


#endif