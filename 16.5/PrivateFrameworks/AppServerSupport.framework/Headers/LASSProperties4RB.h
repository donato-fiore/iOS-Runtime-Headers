// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LASSPROPERTIES4RB_H
#define LASSPROPERTIES4RB_H

@class NSUUID, NSString;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface LASSProperties4RB : NSObject

@property (readonly, nonatomic) NSObject<OS_xpc_object> *additionalProperties; // ivar: _additionalProperties
@property (readonly, nonatomic) BOOL enablePressuredExit; // ivar: _enablePressuredExit
@property (readonly, nonatomic) BOOL enableTransactions; // ivar: _enableTransactions
@property (readonly, nonatomic) NSObject<OS_xpc_object> *endpoints; // ivar: _endpoints
@property (readonly, nonatomic) NSUUID *instance; // ivar: _instance
@property (readonly, nonatomic) BOOL keepAlive; // ivar: _keepAlive
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) unsigned int processType; // ivar: _processType
@property (readonly, nonatomic) NSString *program; // ivar: _program
@property (readonly, nonatomic) int requestedJetsamPriority; // ivar: _requestedJetsamPriority
@property (readonly, nonatomic) BOOL runAtLoad; // ivar: _runAtLoad
@property (readonly, nonatomic) NSInteger serviceType; // ivar: _serviceType


+(id)_propertiesFromAttrs:(id)arg0 ;
+(id)propertiesForJob:(id)arg0 error:(*id)arg1 ;
+(id)propertiesForPid:(int)arg0 error:(*id)arg1 ;
-(id)initWithLabel:(id)arg0 instance:(id)arg1 requestedJetsamPriority:(int)arg2 additionalProperties:(id)arg3 program:(id)arg4 processType:(unsigned int)arg5 keepAlive:(BOOL)arg6 runAtLoad:(BOOL)arg7 enableTransactions:(BOOL)arg8 endpoints:(id)arg9 serviceType:(NSInteger)arg10 ;


@end


#endif