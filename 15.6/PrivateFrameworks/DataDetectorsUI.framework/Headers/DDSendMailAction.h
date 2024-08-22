// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DDSENDMAILACTION_H
#define DDSENDMAILACTION_H

@class NSString;
@protocol MFMailComposeViewControllerDelegate;


#import "DDAction.h"

@interface DDSendMailAction : DDAction <MFMailComposeViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(?)initWithURL:(?)arg0 resultcontext;
-(BOOL)canBePerformedByOpeningURL;
-(id)compactTitle;
-(id)iconName;
-(id)localizedName;
-(id)notificationIconBundleIdentifier;
-(id)notificationTitle;
-(id)notificationURL;
-(int)interactionType;
-(void)performFromView:(id)arg0 ;


@end


#endif