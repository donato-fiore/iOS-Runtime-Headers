// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICLOUDSHARINGACTIVITY_H
#define _UICLOUDSHARINGACTIVITY_H

@class UIViewController, UIImage, NSString;
@protocol _UICloudSharingControllerDelegate_Internal, _UIDocumentSharingControllerDelegate_Private;


#import "UIActivity.h"

@interface _UICloudSharingActivity : UIActivity <_UICloudSharingControllerDelegate_Internal, _UIDocumentSharingControllerDelegate_Private>

 {
    UIViewController *_activityViewController;
}


@property (retain, nonatomic) UIImage *activityImage; // ivar: _activityImage
@property (nonatomic) BOOL activityItemIsFolder; // ivar: _activityItemIsFolder
@property (retain, nonatomic) NSString *activityTitle; // ivar: _activityTitle
@property (retain, nonatomic) UIViewController *activityViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL initialSharing; // ivar: _initialSharing
@property (readonly) Class superclass;


+(NSInteger)activityCategory;
+(NSUInteger)_xpcAttributes;
-(BOOL)_activitySupportsPromiseURLs;
-(BOOL)_isURLEligibleForSharing:(id)arg0 isInitial:(*BOOL)arg1 isFolder:(*BOOL)arg2 ;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(BOOL)eligibleTypeForActivity:(id)arg0 ;
-(id)_systemImageName;
-(id)activityType;
-(void)_cloudShareControllerDidDismiss:(id)arg0 ;
-(void)_documentSharingControllerDidDismiss:(id)arg0 ;
-(void)_setupForInitialSharing;
-(void)_setupForSharingInfo;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif