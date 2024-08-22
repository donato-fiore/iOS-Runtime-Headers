// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSESSIONSYSTEMAPERTUREELEMENTOBSERVER_H
#define SBSESSIONSYSTEMAPERTUREELEMENTOBSERVER_H

@class NSMutableDictionary, NSString;
@protocol SBSessionObserver;

#import <Foundation/Foundation.h>

#import "SBSessionManager.h"

@interface SBSessionSystemApertureElementObserver : NSObject <SBSessionObserver>

 {
    NSMutableDictionary *_elementAssertionBySessionIdentifier;
    NSMutableDictionary *_elementBySessionIdentifier;
    NSMutableDictionary *_prominenceAssertionBySessionIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) SBSessionManager *sessionManager; // ivar: _sessionManager
@property (readonly) Class superclass;


-(id)init;
-(void)_createAndActivateSystemApertureElementWithScene:(id)arg0 sessionIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)_invalidateSystemApertureElementForSessionIdentifier:(id)arg0 ;
-(void)_updateSystemApertureElementProminence:(BOOL)arg0 forSessionIdentifier:(id)arg1 ;
-(void)dismissAlertForSessionIdentifier:(id)arg0 ;
-(void)presentAlertForSessionIdentifier:(id)arg0 ;
-(void)sessionDidEnd:(id)arg0 ;
-(void)sessionDidStart:(id)arg0 ;


@end


#endif