// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPDASHBOARDCONTROLLER_H
#define CPDASHBOARDCONTROLLER_H

@class NSXPCConnection, NSString, NSArray;
@protocol CPDashboardClientInterface, CPDashboardProviding;

#import <Foundation/Foundation.h>


@interface CPDashboardController : NSObject <CPDashboardClientInterface>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSObject<CPDashboardProviding> *dashboardProvider; // ivar: _dashboardProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *shortcutButtons; // ivar: _shortcutButtons
@property (readonly) Class superclass;


+(id)_dashboardClientInterface;
+(id)_dashboardProvidingInterface;
-(id)_init;
-(void)_connectToListenerEndpoint:(id)arg0 ;
-(void)_invalidate;
-(void)_sceneConnect:(id)arg0 ;
-(void)handleActionForControlIdentifier:(id)arg0 ;


@end


#endif