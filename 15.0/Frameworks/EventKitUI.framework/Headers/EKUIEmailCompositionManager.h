// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKUIEMAILCOMPOSITIONMANAGER_H
#define EKUIEMAILCOMPOSITIONMANAGER_H

@class NSArray, NSString, MFMailComposeViewController, EKEvent, UIViewController;
@protocol MFMailComposeViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface EKUIEmailCompositionManager : NSObject <MFMailComposeViewControllerDelegate>

 {
    NSArray *_participantRecipients;
    NSString *_subjectPrefix;
    NSString *_bodyPrefix;
}


@property (retain, nonatomic) MFMailComposeViewController *composeViewController; // ivar: _composeViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) EKEvent *event; // ivar: _event
@property (readonly) NSUInteger hash;
@property (copy) id *messageSendingComplete; // ivar: _messageSendingComplete
@property (readonly) Class superclass;
@property (readonly) UIViewController *viewController;


+(BOOL)canShowViewControllerForEvent:(id)arg0 withParticipantRecipients:(id)arg1 ;
+(id)_attendeesIgnorningMe:(id)arg0 ;
+(id)_recipientEmailAddressesToDisplayNames:(id)arg0 withParticipantRecipients:(id)arg1 ;
-(id)_htmlBodyForMailMessageWithNames:(id)arg0 ;
-(id)initWithEvent:(id)arg0 ;
-(id)initWithEvent:(id)arg0 participantRecipients:(id)arg1 subjectPrefix:(id)arg2 bodyPrefix:(id)arg3 ;
-(void)initViewController;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;


@end


#endif