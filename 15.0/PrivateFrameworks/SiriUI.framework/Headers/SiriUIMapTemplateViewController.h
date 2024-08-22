// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIUIMAPTEMPLATEVIEWCONTROLLER_H
#define SIRIUIMAPTEMPLATEVIEWCONTROLLER_H

@class NSString;
@protocol SiriUIMapTemplateViewDelegate, SiriUIMapTemplateViewControllerDelegate, SiriUIMapTemplateModel;


#import "SiriUIBaseTemplateViewController.h"
#import "SiriUIMapTemplateView.h"

@interface SiriUIMapTemplateViewController : SiriUIBaseTemplateViewController <SiriUIMapTemplateViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SiriUIMapTemplateViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<SiriUIMapTemplateModel> *templateModel;
@property (retain, nonatomic) SiriUIMapTemplateView *view;


-(Class)templateViewClass;
-(void)loadView;
-(void)mapTemplateView:(id)arg0 didModifyPlacemark:(id)arg1 ;
-(void)mapTemplateViewDidSelectMap:(id)arg0 ;
-(void)prepareForDismissal;


@end


#endif