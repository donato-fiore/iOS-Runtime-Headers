// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSYSTEMSERVICE_H
#define SFSYSTEMSERVICE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFService.h"

@interface SFSystemService : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    SFService *_sfService;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue


-(id)description;
-(id)init;
-(void)_handleGetSystemInfoRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleProfileInstallForSession:(id)arg0 request:(id)arg1 responseHandler:(id)arg2 ;
-(void)_handleProfileRemoveForSession:(id)arg0 request:(id)arg1 responseHandler:(id)arg2 ;
-(void)_handleProfilesGetForSession:(id)arg0 request:(id)arg1 responseHandler:(id)arg2 ;
-(void)_handleRebootSystemForSession:(id)arg0 request:(id)arg1 responseHandler:(id)arg2 ;
-(void)_handleSessionEnded:(id)arg0 ;
-(void)_handleSessionStarted:(id)arg0 ;
-(void)_sfServiceStart;
-(void)activate;
-(void)invalidate;


@end


#endif