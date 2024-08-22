// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MEDIACAPTURESTATUSBARMANAGER_H
#define MEDIACAPTURESTATUSBARMANAGER_H

@class SFMediaCaptureStatusBarManager;


#import "TabDocument.h"

@interface MediaCaptureStatusBarManager : SFMediaCaptureStatusBarManager

@property (readonly, nonatomic) TabDocument *recordingTabDocument;


-(id)statusString;
-(void)activateApp;
-(void)browserControllerDidEnterBackground:(id)arg0 ;
-(void)browserControllerWillEnterForeground:(id)arg0 ;
-(void)browserControllerWillEnterTabView:(id)arg0 ;
-(void)browserControllerWillExitTabView:(id)arg0 ;
-(void)tabDidBecomeActive:(id)arg0 ;


@end


#endif