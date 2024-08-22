// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLDETACHEDSCENEDELEGATE_H
#define QLDETACHEDSCENEDELEGATE_H

@class NSString, NSDictionary, NSUserActivity, NSArray, UIWindow;
@protocol QLPreviewControllerDelegate, QLPreviewControllerDataSource, UIWindowSceneDelegate;

#import <Foundation/Foundation.h>

#import "QLPreviewController.h"

@interface QLDetachedSceneDelegate : NSObject <QLPreviewControllerDelegate, QLPreviewControllerDataSource, UIWindowSceneDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *editingModes; // ivar: _editingModes
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUserActivity *quicklookActivity; // ivar: _quicklookActivity
@property (retain, nonatomic) QLPreviewController *quicklookController; // ivar: _quicklookController
@property (nonatomic) NSUInteger selectedURLIndex; // ivar: _selectedURLIndex
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *urls; // ivar: _urls
@property (retain, nonatomic) UIWindow *window; // ivar: _window


-(NSInteger)numberOfPreviewItemsInPreviewController:(id)arg0 ;
-(NSInteger)previewController:(id)arg0 editingModeForPreviewItem:(id)arg1 ;
-(id)activityFromOptions:(id)arg0 ;
-(id)previewController:(id)arg0 previewItemAtIndex:(NSInteger)arg1 ;
-(id)stateRestorationActivityForScene:(id)arg0 ;
-(void)previewControllerWillDismiss:(id)arg0 ;
-(void)scene:(id)arg0 willConnectToSession:(id)arg1 options:(id)arg2 ;
-(void)sceneDidBecomeActive:(id)arg0 ;
-(void)sceneDidDisconnect:(id)arg0 ;
-(void)sceneWillEnterForeground:(id)arg0 ;
-(void)sceneWillResignActive:(id)arg0 ;


@end


#endif