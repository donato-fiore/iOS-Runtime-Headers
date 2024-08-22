// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APPATTESTKEYCHAINCLEANUPCONTROLLER_H
#define APPATTESTKEYCHAINCLEANUPCONTROLLER_H

@class LSApplicationWorkspace, NSString;
@protocol LSApplicationWorkspaceObserverProtocol;

#import <Foundation/Foundation.h>


@interface AppAttestKeychainCleanupController : NSObject <LSApplicationWorkspaceObserverProtocol>

 {
    LSApplicationWorkspace *_workspace;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)_registerActivity;
-(void)_updateActivityCriteria:(*id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)dealloc;
-(void)start;


@end


#endif