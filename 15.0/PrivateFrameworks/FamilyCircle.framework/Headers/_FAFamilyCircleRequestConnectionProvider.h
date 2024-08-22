// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _FAFAMILYCIRCLEREQUESTCONNECTIONPROVIDER_H
#define _FAFAMILYCIRCLEREQUESTCONNECTIONPROVIDER_H

@class NSXPCConnection, NSString, NSLock;
@protocol FAFamilyCircleRequestConnectionProvider, FAFamilyCircleRequestConnectionFactory;

#import <Foundation/Foundation.h>


@interface _FAFamilyCircleRequestConnectionProvider : NSObject <FAFamilyCircleRequestConnectionProvider>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<FAFamilyCircleRequestConnectionFactory> *factory; // ivar: _factory
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSLock *lock; // ivar: _lock
@property (readonly) Class superclass;


+(id)createResumedConnectionWithFactory:(id)arg0 provider:(id)arg1 ;
+(id)sharedInstance;
-(id)init;
-(id)initWithConnectionFactory:(id)arg0 ;
-(id)serviceConnection;
-(void)connectionWasInterrupted:(id)arg0 ;
-(void)connectionWasInvalidated:(id)arg0 ;
-(void)dealloc;


@end


#endif