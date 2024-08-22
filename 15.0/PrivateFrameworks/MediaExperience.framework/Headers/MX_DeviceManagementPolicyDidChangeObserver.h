// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MX_DEVICEMANAGEMENTPOLICYDIDCHANGEOBSERVER_H
#define MX_DEVICEMANAGEMENTPOLICYDIDCHANGEOBSERVER_H

@class NSString;
@protocol LSApplicationWorkspaceObserverProtocol;

#import <Foundation/Foundation.h>


@interface MX_DeviceManagementPolicyDidChangeObserver : NSObject <LSApplicationWorkspaceObserverProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)deviceManagementPolicyDidChange:(id)arg0 ;


@end


#endif