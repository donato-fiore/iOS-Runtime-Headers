// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDTEXTMESSAGEACTION_H
#define DDTEXTMESSAGEACTION_H

@class NSString;
@protocol MFMessageComposeViewControllerDelegate;


#import "DDTelephoneNumberAction.h"

@interface DDTextMessageAction : DDTelephoneNumberAction <MFMessageComposeViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)matchingScheme;
-(BOOL)canBePerformedByOpeningURL;
-(BOOL)prefersOpenToCreate;
-(id)iconName;
-(id)localizedName;
-(id)notificationIconBundleIdentifier;
-(id)notificationTitle;
-(id)notificationURL;
-(id)subtitle;
-(id)viewController;
-(int)interactionType;
-(void)messageComposeViewController:(id)arg0 didFinishWithResult:(NSInteger)arg1 ;
-(void)performFromView:(id)arg0 ;


@end


#endif