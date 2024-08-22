// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUCLOUDPHOTOWELCOMEVIEWCONTROLLER_H
#define PUCLOUDPHOTOWELCOMEVIEWCONTROLLER_H

@class PXCloudPhotoWelcomeViewController, NSString;
@protocol PUWelcomeProtocol;



@interface PUCloudPhotoWelcomeViewController : PXCloudPhotoWelcomeViewController <PUWelcomeProtocol>



@property (copy, nonatomic, setter=_setCompletionHandler:) id *_completionHandler; // ivar: __completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)presentIfNecessaryFromViewController:(id)arg0 completionHandler:(id)arg1 ;
+(void)resetLastPresentationInfo;
-(id)initWithCompletionHandler:(id)arg0 ;
-(id)initWithDefaultTitle;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif