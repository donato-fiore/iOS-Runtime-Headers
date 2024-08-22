// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTRIGGERCONFIGURATIONVIEWCONTROLLER_H
#define WFTRIGGERCONFIGURATIONVIEWCONTROLLER_H

@class UIViewController, NSString, WFTrigger;
@protocol WFTriggerConfigurationClass, WFTriggerConfigurationViewControllerDelegate;



@interface WFTriggerConfigurationViewController : UIViewController <WFTriggerConfigurationClass>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFTriggerConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger mode; // ivar: _mode
@property (readonly, nonatomic) BOOL shouldEnableNextButton;
@property (readonly) Class superclass;
@property (retain, nonatomic) WFTrigger *trigger; // ivar: _trigger


+(Class)viewControllerClassForTriggerClass:(Class)arg0 ;
-(BOOL)isModalInPresentation;
-(id)initWithTrigger:(id)arg0 mode:(NSUInteger)arg1 ;
-(void)dismiss:(id)arg0 ;
-(void)finish;
-(void)updateNextButtonEnabledState;
-(void)viewDidLoad;


@end


#endif