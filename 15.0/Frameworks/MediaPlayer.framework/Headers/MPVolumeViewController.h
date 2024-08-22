// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPVOLUMEVIEWCONTROLLER_H
#define MPVOLUMEVIEWCONTROLLER_H

@class UIViewController;


#import "MPVolumeView.h"

@interface MPVolumeViewController : UIViewController

@property (readonly, nonatomic) MPVolumeView *volumeView; // ivar: _volumeView


-(id)init;
-(struct CGSize )preferredContentSize;
-(void)viewDidLoad;


@end


#endif