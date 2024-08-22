// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRCOMPANIONCONNECTIONCONTROLLER_H
#define MRCOMPANIONCONNECTIONCONTROLLER_H

@class NSString, NSDate, NSError;
@protocol MRCompanionConnectionControllerDelegate;

#import <Foundation/Foundation.h>

#import "MRAVEndpoint.h"

@interface MRCompanionConnectionController : NSObject {
    BOOL _isDiscovering;
    BOOL _isConnecting;
    NSString *_lastConnectionAttemptReason;
    NSDate *_lastConnectionAttemptDate;
    NSError *_lastConnectionAttemptError;
}


@property (retain, nonatomic) MRAVEndpoint *companionEndpoint; // ivar: _companionEndpoint
@property (nonatomic) NSObject<MRCompanionConnectionControllerDelegate> *delegate; // ivar: _delegate


-(BOOL)_shouldAttemptToDiscoverAndConnectToCompanion;
-(id)debugDescription;
-(id)init;
-(void)_handleCompanionDeviceConnectedNotification:(id)arg0 ;
-(void)_handleExternalDeviceConnectionStateDidChangeNotification:(id)arg0 ;
-(void)_maybeAttemptToDiscoverAndConnectToCompanionWithReason:(id)arg0 ;


@end


#endif