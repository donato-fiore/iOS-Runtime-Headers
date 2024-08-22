// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLMOVIEITEMAGGREGATEDVIEWCONTROLLER_H
#define QLMOVIEITEMAGGREGATEDVIEWCONTROLLER_H



#import "QLItemAggregatedViewController.h"
#import "QLItemViewController.h"

@interface QLMovieItemAggregatedViewController : QLItemAggregatedViewController {
    QLItemViewController *_previewController;
}




-(void)loadPreviewControllerWithContents:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif