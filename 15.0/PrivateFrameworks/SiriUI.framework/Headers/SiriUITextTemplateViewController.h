// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIUITEXTTEMPLATEVIEWCONTROLLER_H
#define SIRIUITEXTTEMPLATEVIEWCONTROLLER_H

@class NSString;
@protocol SiriUILabelStackTemplateViewDelegate, SiriUITextTemplateModel;


#import "SiriUITemplateViewController.h"
#import "SiriUITextTemplateView.h"

@interface SiriUITextTemplateViewController : SiriUITemplateViewController <SiriUILabelStackTemplateViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<SiriUITextTemplateModel> *templateModel;
@property (retain, nonatomic) SiriUITextTemplateView *view;


-(BOOL)labelStackTemplateViewShouldLayoutCompressed:(id)arg0 ;
-(void)_textTemplateViewDisclosed:(id)arg0 ;
-(void)loadView;


@end


#endif