// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDELECTROCARDIOGRAMDATALISTVIEWCONTROLLER_H
#define WDELECTROCARDIOGRAMDATALISTVIEWCONTROLLER_H



#import "WDDataListViewController.h"

@interface WDElectrocardiogramDataListViewController : WDDataListViewController {
    NSInteger _mode;
}




-(BOOL)isEditEnabled;
-(id)initWithDisplayType:(id)arg0 profile:(id)arg1 dataProvider:(id)arg2 usingInsetStyling:(BOOL)arg3 mode:(NSInteger)arg4 ;


@end


#endif