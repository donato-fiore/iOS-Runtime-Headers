// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSATTSIRISERVICECLIENT_H
#define CSATTSIRISERVICECLIENT_H

@class NSXPCConnection, NSString;
@protocol CSAttSiriServiceDelegate, CSAttSiriServiceProtocol;

#import <Foundation/Foundation.h>


@interface CSAttSiriServiceClient : NSObject <CSAttSiriServiceDelegate, CSAttSiriServiceProtocol>



@property (retain, nonatomic) NSXPCConnection *attSiriSvcConn; // ivar: _attSiriSvcConn
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSAttSiriServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) id *remoteSvcProxy; // ivar: _remoteSvcProxy
@property (readonly) Class superclass;


-(id)init;
-(void)_setupAttSiriSvcXpcConnection;
-(void)attSiriDidDetectAttendingTrigger:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)siriRequestProcessingCompleted;
-(void)startAttendingWithContext:(id)arg0 ;
-(void)stopAttendingWithContext:(id)arg0 ;


@end


#endif