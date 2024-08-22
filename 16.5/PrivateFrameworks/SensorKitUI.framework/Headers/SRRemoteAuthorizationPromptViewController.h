// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRREMOTEAUTHORIZATIONPROMPTVIEWCONTROLLER_H
#define SRREMOTEAUTHORIZATIONPROMPTVIEWCONTROLLER_H

@class UIRemoteViewController, NSString, NSExtension;
@protocol SRAuthorizationPromptClientInterface, SRRemoteAuthorizationPromptViewController, SRRemoteAuthorizationPromptViewControllerDelegate, NSCopying;



@interface SRRemoteAuthorizationPromptViewController : UIRemoteViewController <SRAuthorizationPromptClientInterface, SRRemoteAuthorizationPromptViewController>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SRRemoteAuthorizationPromptViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<NSCopying> *request; // ivar: _request
@property (readonly) Class superclass;
@property (weak, nonatomic) NSExtension *weakExtension; // ivar: _weakExtension


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(void)initialize;
+(void)requestViewControllerWithCompletionHandler:(id)arg0 ;
-(id)serviceViewControllerProxy;
-(void)authorizationRequestCompleted;
-(void)authorizationRequestDidDisappear;
-(void)authorizationRequestFailedWithError:(id)arg0 ;
-(void)authorizationRequestWillDisappear;
-(void)authorizationUIReadyForDisplayModally:(BOOL)arg0 ;
-(void)dealloc;
-(void)deleteAllSamples;
-(void)invalidate;
-(void)requestAuthorizationForBundle:(id)arg0 services:(id)arg1 ;
-(void)requestAuthorizationMigrationForBundle:(id)arg0 services:(id)arg1 ;
-(void)showAppsAndStudies;
-(void)showFirstRunOnboarding;
-(void)showResearchData;
-(void)showStudyAuthorizationForBundlePath:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif