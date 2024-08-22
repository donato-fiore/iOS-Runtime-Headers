// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DPSERVER_H
#define _DPSERVER_H

@class NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, _DPDaemonProtocol;

#import <Foundation/Foundation.h>

#import "_DPStorage.h"

@interface _DPServer : NSObject <NSXPCListenerDelegate, _DPDaemonProtocol>



@property (readonly, nonatomic) _DPStorage *db; // ivar: _db
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly, nonatomic) BOOL metadataMethodsAllowed;
@property (readonly) Class superclass;


+(BOOL)shouldNotRecord:(id)arg0 forKey:(id)arg1 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)retireReports:(id)arg0 inDirectory:(id)arg1 ;
-(id)init;
-(id)initWithDatabaseDirectoryPath:(id)arg0 reportsDirectoryPath:(id)arg1 enablePeriodicTasks:(BOOL)arg2 enterSandbox:(BOOL)arg3 ;
-(id)reportsNotYetSubmittedInDirecory:(id)arg0 ;
-(void)recordBitValues:(id)arg0 forKey:(id)arg1 withReply:(id)arg2 ;
-(void)recordBitValues:(id)arg0 metadata:(id)arg1 forKey:(id)arg2 withReply:(id)arg3 ;
-(void)recordBitVectors:(id)arg0 forKey:(id)arg1 withReply:(id)arg2 ;
-(void)recordBitVectors:(id)arg0 metadata:(id)arg1 forKey:(id)arg2 withReply:(id)arg3 ;
-(void)recordFloatVectors:(id)arg0 forKey:(id)arg1 withReply:(id)arg2 ;
-(void)recordFloatVectors:(id)arg0 metadata:(id)arg1 forKey:(id)arg2 withReply:(id)arg3 ;
-(void)recordNumbers:(id)arg0 forKey:(id)arg1 withReply:(id)arg2 ;
-(void)recordNumbers:(id)arg0 metadata:(id)arg1 forKey:(id)arg2 withReply:(id)arg3 ;
-(void)recordStrings:(id)arg0 forKey:(id)arg1 withReply:(id)arg2 ;
-(void)recordStrings:(id)arg0 metadata:(id)arg1 forKey:(id)arg2 withReply:(id)arg3 ;
-(void)recordValues:(id)arg0 forKey:(id)arg1 usingSelector:(SEL)arg2 ;
-(void)recordValues:(id)arg0 metadata:(id)arg1 forKey:(id)arg2 usingSelector:(SEL)arg3 ;
-(void)recordWords:(id)arg0 forKey:(id)arg1 withReply:(id)arg2 ;
-(void)reportsNotYetSubmittedWithReply:(id)arg0 ;
-(void)retireReports:(id)arg0 withReply:(id)arg1 ;
-(void)setupPeriodicTasksWith:(id)arg0 ;
-(void)start;


@end


#endif