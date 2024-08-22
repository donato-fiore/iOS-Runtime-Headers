// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTINSTRUMENTSERVER_H
#define DTINSTRUMENTSERVER_H

@class DTXConnection, NSString;
@protocol DTInstrumentServerAllowedRPC, DTInstrumentServerSimulatorPrivilege;

#import <Foundation/Foundation.h>


@interface DTInstrumentServer : NSObject <DTInstrumentServerAllowedRPC, DTInstrumentServerSimulatorPrivilege>



@property (readonly, nonatomic) DTXConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isAppleInternal;
+(unsigned int)taskForPid:(int)arg0 ;
+(void)_taskInvalid:(unsigned int)arg0 forPid:(int)arg1 ;
+(void)_tfpPortReceived:(unsigned int)arg0 ;
+(void)takeOwnershipOfSharedAuthorization:(*void)arg0 ;
-(id)_blessSimulatorHub:(int)arg0 ;
-(id)initWithTransport:(id)arg0 ;
-(void)_notifyOfTFPCommunicationsPort:(unsigned int)arg0 ;
-(void)cancel;
-(void)loadServicesAtPath:(id)arg0 ;
-(void)resume;
-(void)setMaxConnectionEnqueue:(NSUInteger)arg0 ;


@end


#endif