// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFACTIVITYVIEWCONTROLLER_H
#define _SFACTIVITYVIEWCONTROLLER_H

@class UIActivityViewController, NSArray, NSMutableSet, NSString, NSURL;
@protocol _SFActivityItemCustomizationDelegate, _SFActivityViewControllerDelegate;


#import "_SFActivityItemProviderCollection.h"
#import "_SFActivityItemCustomizationController.h"
#import "_SFPrintController.h"
#import "_SFSafariSharingExtensionController.h"

@interface _SFActivityViewController : UIActivityViewController <_SFActivityItemCustomizationDelegate>

 {
    _SFActivityItemProviderCollection *_itemProviderCollection;
    NSArray *_initialApplicationActivities;
    NSMutableSet *_activityTypesExcludedDueToSelectedCustomization;
}


@property (readonly, nonatomic) NSArray *activityItemProviders; // ivar: _activityItemProviders
@property (copy, nonatomic) NSString *currentExtensionIdentifier; // ivar: _currentExtensionIdentifier
@property (retain, nonatomic) _SFActivityItemCustomizationController *customizationController; // ivar: _customizationController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFActivityViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _SFPrintController *printController; // ivar: _printController
@property (weak, nonatomic) _SFSafariSharingExtensionController *sharingExtensionController; // ivar: _sharingExtensionController
@property (retain, nonatomic) NSURL *sharingURL; // ivar: _sharingURL
@property (readonly) Class superclass;


+(id)activeWebPageExtensionItemForURL:(id)arg0 withPreviewImageHandler:(id)arg1 ;
-(BOOL)_containsProviderForDownloadActivityAndGetMIMEType:(*id)arg0 uti:(*id)arg1 ;
-(id)_extensionItemForExtensionActivity:(id)arg0 ;
-(id)_javaScriptProcessingFileURLInExtension:(id)arg0 ;
-(id)initWithActivityItemProviderCollection:(id)arg0 applicationActivities:(id)arg1 sharingURL:(id)arg2 sourceURL:(id)arg3 ;
-(id)initWithActivityItems:(id)arg0 applicationActivities:(id)arg1 sharingURL:(id)arg2 sourceURL:(id)arg3 ;
-(void)_executeActivity;
-(void)_performActivity:(id)arg0 ;
-(void)_prepareActivity:(id)arg0 completion:(id)arg1 ;
-(void)_preparePrint:(id)arg0 completion:(id)arg1 ;
-(void)_processJavaScriptFinalizeReturnedItems:(id)arg0 forExtension:(id)arg1 ;
-(void)_updateActivityItems:(id)arg0 ;
-(void)_updateActivityItems:(id)arg0 applicationActivities:(id)arg1 ;
-(void)_updatePrintControllerWithActivityItems:(id)arg0 ;
-(void)activityDidComplete:(id)arg0 withReturnedItems:(id)arg1 success:(BOOL)arg2 ;
-(void)customizationControllerCustomizationsDidChange:(id)arg0 ;
-(void)dealloc;
-(void)prepareJavaScriptExtensionItemForActivity:(id)arg0 ;


@end


#endif