// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMEDIASELECTIONVIEWCONTROLLER_H
#define AVMEDIASELECTIONVIEWCONTROLLER_H

@class UINavigationController;


#import "AVMediaSelectionTableViewController.h"

@interface AVMediaSelectionViewController : UINavigationController {
    AVMediaSelectionTableViewController *_mediaSelectionTableViewController;
}




-(id)initWithPlayerController:(id)arg0 doneButtonTarget:(id)arg1 doneButtonAction:(SEL)arg2 ;
-(id)mediaSelectionTableViewController;


@end


#endif