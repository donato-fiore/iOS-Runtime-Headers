// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef URTSERVICEDESTINATIONPRESENTATION_H
#define URTSERVICEDESTINATIONPRESENTATION_H

@class BSServiceConnection, NSString;
@protocol URTAlertServerToClientInterface, URTDestinationPresenting, OS_dispatch_queue, URTDestinationPresentationDelegate;

#import <Foundation/Foundation.h>

#import "URTAlert.h"

@interface URTServiceDestinationPresentation : NSObject <URTAlertServerToClientInterface, URTDestinationPresenting>



@property (readonly, nonatomic) URTAlert *alert; // ivar: _alert
@property (readonly, nonatomic) BSServiceConnection *connection; // ivar: _connection
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<URTDestinationPresentationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger destination; // ivar: _destination
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *remoteTargetQueue; // ivar: _remoteTargetQueue
@property (readonly) Class superclass;


-(id)initWithAlert:(id)arg0 forDestination:(NSInteger)arg1 ;
-(void)_handleConnectionActivated;
-(void)_handleConnectionInterrupted;
-(void)dismiss;
-(void)handleCancelAction;
-(void)handleDefaultAction;
-(void)handleOtherAction;
-(void)invalidate;
-(void)present;


@end


#endif