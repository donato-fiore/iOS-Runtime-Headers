// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCSCONTROLCENTERSERVICE_H
#define CCSCONTROLCENTERSERVICE_H


#import <Foundation/Foundation.h>

#import "CCSRemoteServiceConnection.h"

@interface CCSControlCenterService : NSObject {
    CCSRemoteServiceConnection *_connection;
}




+(id)sharedInstance;
-(id)_init;
-(void)getEnabledStateOfModuleWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)presentModuleWithIdentifier:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestAvailableModuleIdentifiersWithCompletionHandler:(id)arg0 ;
-(void)requestDisableModuleWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestEnableModuleWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestEnableModuleWithIdentifier:(id)arg0 force:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)setVisibility:(BOOL)arg0 forModuleWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif