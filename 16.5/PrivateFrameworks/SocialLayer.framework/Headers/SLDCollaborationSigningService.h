// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLDCOLLABORATIONSIGNINGSERVICE_H
#define SLDCOLLABORATIONSIGNINGSERVICE_H

@class NSString;
@protocol SLDService, SLDCollaborationSigningService, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SLPersonIdentityGenerator.h"
#import "SLDTaskManager.h"

@interface SLDCollaborationSigningService : NSObject <SLDService, SLDCollaborationSigningService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SLPersonIdentityGenerator *personIdentityGenerator; // ivar: _personIdentityGenerator
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *privateSerialQueue; // ivar: _privateSerialQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) SLDTaskManager *taskManager; // ivar: _taskManager


+(id)remoteObjectProtocol;
+(id)sharedService;
-(BOOL)allowsConnection:(id)arg0 ;
-(id)init;
-(id)signData:(id)arg0 forCollaborationIdentifier:(id)arg1 trackingPreventionSalt:(id)arg2 reply:(id)arg3 ;
-(id)signSourceProcessWithMetadata:(id)arg0 reply:(id)arg1 ;


@end


#endif