// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIUITEMPLATEVIEWCONTROLLER_H
#define SIRIUITEMPLATEVIEWCONTROLLER_H

@class UIViewController, UIView<SiriUITemplateView>;
@protocol SiriUITemplateViewControllerDelegate, SiriUITemplateModel, SiriUITemplateModelPrivate;



@interface SiriUITemplateViewController : UIViewController

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (nonatomic, getter=isCompressed) BOOL compressed; // ivar: _compressed
@property (weak, nonatomic) NSObject<SiriUITemplateViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<SiriUITemplateModel> *templateModel; // ivar: _templateModel
@property (readonly, nonatomic) NSObject<SiriUITemplateModelPrivate> *templateModelPrivate;
@property (retain, nonatomic) UIView<SiriUITemplateView> *view;


+(id)templateViewControllerForTemplateModel:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(id)_initWithTemplateModel:(id)arg0 ;
-(void)loadView;
-(void)prepareForDismissal;


@end


#endif