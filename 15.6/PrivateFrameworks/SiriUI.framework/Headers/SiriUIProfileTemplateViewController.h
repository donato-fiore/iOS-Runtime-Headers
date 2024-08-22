// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUIPROFILETEMPLATEVIEWCONTROLLER_H
#define SIRIUIPROFILETEMPLATEVIEWCONTROLLER_H

@class NSString;
@protocol SiriUILabelStackTemplateViewDelegate, SiriUIProfileTemplateModel;


#import "SiriUIBaseTemplateViewController.h"
#import "SiriUIProfileTemplateView.h"

@interface SiriUIProfileTemplateViewController : SiriUIBaseTemplateViewController <SiriUILabelStackTemplateViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<SiriUIProfileTemplateModel> *templateModel;
@property (retain, nonatomic) SiriUIProfileTemplateView *view;


-(BOOL)labelStackTemplateViewShouldLayoutCompressed:(id)arg0 ;
-(Class)templateViewClass;
-(void)loadView;


@end


#endif