// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTAPPLICATIONWORKSPACEOBSERVER_H
#define DTAPPLICATIONWORKSPACEOBSERVER_H

@class NSMutableDictionary, NSString;
@protocol LSApplicationWorkspaceObserverProtocol;

#import <Foundation/Foundation.h>


@interface DTApplicationWorkspaceObserver : NSObject <LSApplicationWorkspaceObserverProtocol>

 {
    NSMutableDictionary *_registrationsByToken;
    NSMutableDictionary *_knownAppsByPath;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(id)registerNotificationToken:(id)arg0 observer:(id)arg1 query:(id)arg2 ;
-(void)_notifyWithApplicationProxy:(id)arg0 addition:(BOOL)arg1 ;
-(void)_notifyWithDictionaryRepresentation:(id)arg0 addition:(BOOL)arg1 ;
-(void)_unregisterNotificationTokenInternal:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)unregisterNotificationToken:(id)arg0 observer:(id)arg1 ;


@end


#endif