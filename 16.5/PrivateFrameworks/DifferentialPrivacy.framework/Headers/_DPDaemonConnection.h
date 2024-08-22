// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DPDAEMONCONNECTION_H
#define _DPDAEMONCONNECTION_H

@class NSXPCConnection;
@protocol _DPDaemonProtocol;

#import <Foundation/Foundation.h>


@interface _DPDaemonConnection : NSObject <_DPDaemonProtocol>



@property (readonly, nonatomic) NSXPCConnection *daemonConnection; // ivar: _daemonConnection


-(id)init;
-(void)dealloc;
-(void)recordBitValues:(id)arg0 forKey:(id)arg1 withReply:(id)arg2 ;
-(void)recordBitValues:(id)arg0 metadata:(id)arg1 forKey:(id)arg2 withReply:(id)arg3 ;
-(void)recordBitVectors:(id)arg0 forKey:(id)arg1 withReply:(id)arg2 ;
-(void)recordBitVectors:(id)arg0 metadata:(id)arg1 forKey:(id)arg2 withReply:(id)arg3 ;
-(void)recordFloatVectors:(id)arg0 forKey:(id)arg1 withReply:(id)arg2 ;
-(void)recordFloatVectors:(id)arg0 metadata:(id)arg1 forKey:(id)arg2 withReply:(id)arg3 ;
-(void)recordNumbers:(id)arg0 forKey:(id)arg1 withReply:(id)arg2 ;
-(void)recordNumbers:(id)arg0 metadata:(id)arg1 forKey:(id)arg2 withReply:(id)arg3 ;
-(void)recordNumbersVectors:(id)arg0 forKey:(id)arg1 withReply:(id)arg2 ;
-(void)recordNumbersVectors:(id)arg0 metadata:(id)arg1 forKey:(id)arg2 withReply:(id)arg3 ;
-(void)recordStrings:(id)arg0 forKey:(id)arg1 withReply:(id)arg2 ;
-(void)recordStrings:(id)arg0 metadata:(id)arg1 forKey:(id)arg2 withReply:(id)arg3 ;
-(void)recordWords:(id)arg0 forKey:(id)arg1 withReply:(id)arg2 ;
-(void)reportsNotYetSubmittedWithReply:(id)arg0 ;
-(void)retireReports:(id)arg0 withReply:(id)arg1 ;


@end


#endif