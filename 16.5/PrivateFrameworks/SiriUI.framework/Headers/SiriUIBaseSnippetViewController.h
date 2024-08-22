// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIUIBASESNIPPETVIEWCONTROLLER_H
#define SIRIUIBASESNIPPETVIEWCONTROLLER_H

@class UIViewController, AceObject, NSString, NSUUID, SAUISnippet;
@protocol SiriSharedUIViewControlling, SiriUIViewController, SiriUIBaseAceObjectViewControllerDelegate;


#import "SiriUISashItem.h"

@interface SiriUIBaseSnippetViewController : UIViewController <SiriSharedUIViewControlling, SiriUIViewController>



@property (retain, nonatomic) AceObject *aceObject; // ivar: aceObject
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SiriUIBaseAceObjectViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *instrumentationTurnIdentifier; // ivar: _instrumentationTurnIdentifier
@property (readonly, nonatomic) SiriUISashItem *sashItem; // ivar: _sashItem
@property (retain, nonatomic) SAUISnippet *snippet;
@property (readonly) Class superclass;
@property (nonatomic, getter=isUtteranceUserInteractionEnabled) BOOL utteranceUserInteractionEnabled; // ivar: _utteranceUserInteractionEnabled


-(BOOL)_canShowWhileLocked;
-(BOOL)hasSash;
-(CGFloat)desiredHeight;
-(void)siriDidDeactivate;
-(void)siriDidReceiveAdditionalContent:(id)arg0 error:(id)arg1 ;
-(void)wasAddedToTranscript;


@end


#endif