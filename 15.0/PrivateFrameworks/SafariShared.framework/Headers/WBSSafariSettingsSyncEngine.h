// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSSAFARISETTINGSSYNCENGINE_H
#define WBSSAFARISETTINGSSYNCENGINE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSSafariSettingsSyncEngine : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
}




-(BOOL)syncEnabled;
-(id)init;
-(void)deleteBackgroundImageFromCloudKitWithCompletionHandler:(id)arg0 ;
-(void)registerDiagnosticInfo:(id)arg0 ;
-(void)saveImageWithURL:(id)arg0 isLightAppearance:(BOOL)arg1 successCompletionHandler:(id)arg2 ;
-(void)saveSettingWithDictionaryRepresentation:(id)arg0 successCompletionHandler:(id)arg1 ;
-(void)scheduleCloudBackgroundImageSaveWithURL:(id)arg0 isLightAppearance:(BOOL)arg1 successCompletionHandler:(id)arg2 ;
-(void)syncSettingsDownWithCompletion:(id)arg0 ;
-(void)syncSettingsUpWithCompletion:(id)arg0 ;
-(void)triggerImmediateBackgroundImageSaveIfApplicable;


@end


#endif