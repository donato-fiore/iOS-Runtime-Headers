// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDOCCAMNAVIGATIONCONTROLLER_H
#define ICDOCCAMNAVIGATIONCONTROLLER_H

@class UINavigationController, NSString;
@protocol DCUnsavedDataDelegate;



@interface ICDocCamNavigationController : UINavigationController <DCUnsavedDataDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldAutorotate;
-(NSInteger)_preferredModalPresentationStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithDelegate:(id)arg0 ;
-(void)didReceiveMemoryWarning;
-(void)prepareForDismissal;


@end


#endif