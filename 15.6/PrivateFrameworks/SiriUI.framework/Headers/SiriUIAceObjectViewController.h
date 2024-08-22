// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUIACEOBJECTVIEWCONTROLLER_H
#define SIRIUIACEOBJECTVIEWCONTROLLER_H

@class UIViewController, AceObject, NSString;
@protocol SiriUIViewController, SiriUIAceObjectViewControllerDelegate;



@interface SiriUIAceObjectViewController : UIViewController <SiriUIViewController>



@property (retain, nonatomic) AceObject *aceObject; // ivar: _aceObject
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SiriUIAceObjectViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic, getter=isUtteranceUserInteractionEnabled) BOOL utteranceUserInteractionEnabled; // ivar: _utteranceUserInteractionEnabled
@property (readonly, nonatomic, getter=isVirgin) BOOL virgin; // ivar: _virgin


-(BOOL)_canShowWhileLocked;
-(BOOL)_shouldSkipAnimationsInAlternateSpeeds;
-(BOOL)removedAfterDialogProgresses;
-(CGFloat)_insertionAnimatedZPosition;
-(CGFloat)desiredHeight;
-(NSInteger)_insertionAnimation;
-(NSInteger)_pinAnimationType;
-(NSInteger)_replacementAnimation;
-(id)_privateDelegate;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)siriDidDeactivate;
-(void)siriWillActivateFromSource:(NSInteger)arg0 ;
-(void)wasAddedToTranscript;


@end


#endif