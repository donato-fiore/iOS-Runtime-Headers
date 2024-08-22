// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHDATABASEASSERTIONSERVER_H
#define ACHDATABASEASSERTIONSERVER_H

@class HDStandardTaskServer, NSMutableDictionary, NSString;
@protocol ACHDatabaseAssertionServerInterface, OS_dispatch_queue;



@interface ACHDatabaseAssertionServer : HDStandardTaskServer <ACHDatabaseAssertionServerInterface>



@property (retain, nonatomic) NSMutableDictionary *assertionByToken; // ivar: _assertionByToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)dealloc;
-(void)remote_acquireDatabaseAssertionWithIdentifier:(id)arg0 duration:(CGFloat)arg1 completion:(id)arg2 ;
-(void)remote_invalidateAssertionWithToken:(id)arg0 completion:(id)arg1 ;


@end


#endif