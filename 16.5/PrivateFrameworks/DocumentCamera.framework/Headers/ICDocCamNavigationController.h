// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDOCCAMNAVIGATIONCONTROLLER_H
#define ICDOCCAMNAVIGATIONCONTROLLER_H

@class UINavigationController;



@interface ICDocCamNavigationController : UINavigationController



-(BOOL)_canShowWhileLocked;
-(BOOL)shouldAutorotate;
-(NSInteger)_preferredModalPresentationStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithImageCache:(id)arg0 docCamDelegate:(id)arg1 remoteDocCamDelegate:(id)arg2 ;
-(void)prepareForDismissal;


@end


#endif