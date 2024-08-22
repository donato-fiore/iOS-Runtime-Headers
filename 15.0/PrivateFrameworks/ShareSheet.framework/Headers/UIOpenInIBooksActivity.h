// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIOPENINIBOOKSACTIVITY_H
#define UIOPENINIBOOKSACTIVITY_H

@class NSString, LSApplicationProxy, NSOperation, UIPrintInteractionController, NSURL;
@protocol LSOpenResourceOperationDelegate, UIManagedConfigurationRestrictableActivity;


#import "UIActivity.h"

@interface UIOpenInIBooksActivity : UIActivity <LSOpenResourceOperationDelegate, UIManagedConfigurationRestrictableActivity>



@property (retain, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (retain, nonatomic) LSApplicationProxy *applicationProxy; // ivar: _applicationProxy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isContentManaged; // ivar: _isContentManaged
@property (retain, nonatomic) NSOperation *operation; // ivar: _operation
@property (retain, nonatomic) UIPrintInteractionController *printInteractionController; // ivar: _printInteractionController
@property (nonatomic) BOOL shouldUnlinkFile; // ivar: _shouldUnlinkFile
@property (copy, nonatomic) NSString *sourceApplicationBundleID; // ivar: _sourceApplicationBundleID
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(NSInteger)activityCategory;
+(NSUInteger)_xpcAttributes;
+(id)bestJobNameForActivityItems:(id)arg0 ;
+(id)defaultJobName;
+(id)jobNameFormatForFile;
-(BOOL)_appIsDocumentTypeOwner;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(NSInteger)_defaultSortGroup;
-(id)_bundleIdentifierForActivityImageCreation;
-(id)_loadedApplicationProxy;
-(id)activityTitle;
-(id)activityType;
-(id)init;
-(void)_cleanup;
-(void)_finishedCopyingResource:(BOOL)arg0 ;
-(void)_openDocumentWithApplication;
-(void)openResourceOperation:(id)arg0 didFailWithError:(id)arg1 ;
-(void)openResourceOperation:(id)arg0 didFinishCopyingResource:(id)arg1 ;
-(void)openResourceOperationDidComplete:(id)arg0 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif