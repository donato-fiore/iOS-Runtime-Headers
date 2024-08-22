// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPLACECARDFOOTERACTIONSVIEWCONTROLLER_H
#define MKPLACECARDFOOTERACTIONSVIEWCONTROLLER_H

@class NSString;
@protocol MKModuleViewControllerProtocol;


#import "MKPlaceCardActionsViewController.h"

@interface MKPlaceCardFooterActionsViewController : MKPlaceCardActionsViewController <MKModuleViewControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(void)reloadData;
-(void)viewDidLoad;


@end


#endif