// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSVOICETEMPLATEVIEWCONTROLLER_H
#define CPSVOICETEMPLATEVIEWCONTROLLER_H

@class UITapGestureRecognizer, NSString;
@protocol CPVoiceTemplateProviding;


#import "CPSBaseTemplateViewController.h"
#import "CPSVoiceView.h"

@interface CPSVoiceTemplateViewController : CPSBaseTemplateViewController <CPVoiceTemplateProviding>



@property (retain, nonatomic) UITapGestureRecognizer *backGestureRecognizer; // ivar: _backGestureRecognizer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lastVoiceTemplateStateChangeTime; // ivar: _lastVoiceTemplateStateChangeTime
@property (readonly) Class superclass;
@property (retain, nonatomic) CPSVoiceView *titleView; // ivar: _titleView


-(id)_stateWithIdentifier:(id)arg0 ;
-(id)initWithVoiceTemplate:(id)arg0 templateDelegate:(id)arg1 templateEnvironment:(id)arg2 ;
-(id)voiceTemplate;
-(void)_activateStateWithIdentifier:(id)arg0 ;
-(void)_backGestureFired:(id)arg0 ;
-(void)_viewDidLoad;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif