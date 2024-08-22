// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSPRINGBOARDSERVERALERTMANAGER_H
#define AXSPRINGBOARDSERVERALERTMANAGER_H

@class NSString, NSMutableDictionary;
@protocol SBSRemoteAlertHandleObserver, AXViewServiceHandler;

#import <Foundation/Foundation.h>


@interface AXSpringBoardServerAlertManager : NSObject <SBSRemoteAlertHandleObserver, AXViewServiceHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *handlesByService; // ivar: _handlesByService
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isShowingAXUIViewService:(id)arg0 ;
-(void)hideAXUIViewService:(id)arg0 ;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidActivate:(id)arg0 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;
-(void)showAXUIViewService:(id)arg0 withData:(id)arg1 ;


@end


#endif