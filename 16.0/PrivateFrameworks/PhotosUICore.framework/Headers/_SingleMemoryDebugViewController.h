// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SINGLEMEMORYDEBUGVIEWCONTROLLER_H
#define _SINGLEMEMORYDEBUGVIEWCONTROLLER_H

@class UIViewController;


#import "PXMemoryView.h"

@interface _SingleMemoryDebugViewController : UIViewController {
    PXMemoryView *_memoryView;
}




-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif