// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMEMORIESTVVIEWCONTROLLER_H
#define PXMEMORIESTVVIEWCONTROLLER_H

@class UIViewController;


#import "PXMemoriesUIViewController.h"
#import "PXMemoriesDataSourceManager.h"

@interface PXMemoriesTVViewController : UIViewController {
    PXMemoriesUIViewController *_memoriesController;
    PXMemoriesDataSourceManager *_dataSourceManager;
}




-(id)initWithDataSourceManager:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif