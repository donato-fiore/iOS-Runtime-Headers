// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUVIEWSERVICEUPNEXTVIEWCONTROLLER_H
#define MRUVIEWSERVICEUPNEXTVIEWCONTROLLER_H

@class UIViewController, MPMediaControlsConfiguration, NSString, UILabel;
@protocol MRUViewServiceViewController;



@interface MRUViewServiceUpNextViewController : UIViewController <MRUViewServiceViewController>



@property (retain, nonatomic) MPMediaControlsConfiguration *configuration; // ivar: configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissalBlock; // ivar: dismissalBlock
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *placeholderLabel; // ivar: _placeholderLabel
@property (readonly) Class superclass;


-(void)transitionToVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif