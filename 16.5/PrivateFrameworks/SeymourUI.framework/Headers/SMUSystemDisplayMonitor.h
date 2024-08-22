// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SMUSYSTEMDISPLAYMONITOR_H
#define SMUSYSTEMDISPLAYMONITOR_H

@class NSSet, NSString, FBSDisplayMonitor;
@protocol FBSDisplayObserving, SMUSystemDisplayMonitoring, SMUSystemDisplayIdentity;

#import <Foundation/Foundation.h>


@interface SMUSystemDisplayMonitor : NSObject <FBSDisplayObserving, SMUSystemDisplayMonitoring>



@property (readonly, nonatomic) NSSet *connectedIdentities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBSDisplayMonitor *displayMonitor; // ivar: _displayMonitor
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SMUSystemDisplayIdentity> *mainIdentity;
@property (copy, nonatomic) id *onDisplayConnected; // ivar: onDisplayConnected
@property (copy, nonatomic) id *onDisplayDisconnected; // ivar: onDisplayDisconnected
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;
-(void)displayMonitor:(id)arg0 didConnectIdentity:(id)arg1 withConfiguration:(id)arg2 ;
-(void)displayMonitor:(id)arg0 willDisconnectIdentity:(id)arg1 ;


@end


#endif