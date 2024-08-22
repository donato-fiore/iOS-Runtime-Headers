// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIEWSERVICEHELPER_H
#define VIEWSERVICEHELPER_H

@class NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, ViewServiceProtocol, ViewServiceHelperDelegate;

#import <Foundation/Foundation.h>


@interface ViewServiceHelper : NSObject <NSXPCListenerDelegate, ViewServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property NSObject<ViewServiceHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSXPCListener *listener; // ivar: _listener
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)handleStatusBarTap;
-(void)pauseResumeResponse:(id)arg0 ;
-(void)pidNotification:(id)arg0 ;
-(void)run;
-(void)termsAndConditionsResponse:(id)arg0 ;


@end


#endif