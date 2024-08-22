// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ANECLIENT_H
#define _ANECLIENT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "_ANEDaemonConnection.h"

@interface _ANEClient : NSObject

@property (readonly, nonatomic) _ANEDaemonConnection *conn; // ivar: _conn
@property (readonly, nonatomic) NSArray *priorityQ; // ivar: _priorityQ


+(id)new;
+(id)sharedConnection;
+(id)sharedPrivateConnection;
+(void)initialize;
-(BOOL)beginRealTimeTask;
-(BOOL)compileModel:(id)arg0 options:(id)arg1 qos:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)compiledModelExistsFor:(id)arg0 ;
-(BOOL)compiledModelExistsMatchingHash:(id)arg0 ;
-(BOOL)doEvaluateDirectWithModel:(id)arg0 options:(id)arg1 request:(id)arg2 qos:(unsigned int)arg3 error:(*id)arg4 ;
-(BOOL)doLoadModel:(id)arg0 options:(id)arg1 qos:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)doUnloadModel:(id)arg0 options:(id)arg1 qos:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)echo:(id)arg0 ;
-(BOOL)endRealTimeTask;
-(BOOL)evaluateRealTimeWithModel:(id)arg0 options:(id)arg1 request:(id)arg2 error:(*id)arg3 ;
-(BOOL)evaluateWithModel:(id)arg0 options:(id)arg1 request:(id)arg2 qos:(unsigned int)arg3 error:(*id)arg4 ;
-(BOOL)loadModel:(id)arg0 options:(id)arg1 qos:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)loadRealTimeModel:(id)arg0 options:(id)arg1 qos:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)unloadModel:(id)arg0 options:(id)arg1 qos:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)unloadRealTimeModel:(id)arg0 options:(id)arg1 qos:(unsigned int)arg2 error:(*id)arg3 ;
-(id)init;
-(id)initWithRestrictedAccessAllowed:(BOOL)arg0 ;
-(void)dealloc;
-(void)purgeCompiledModel:(id)arg0 ;
-(void)purgeCompiledModelMatchingHash:(id)arg0 ;


@end


#endif