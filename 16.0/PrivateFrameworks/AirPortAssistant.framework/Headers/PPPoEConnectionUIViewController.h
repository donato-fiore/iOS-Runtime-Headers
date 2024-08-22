// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPPOECONNECTIONUIVIEWCONTROLLER_H
#define PPPOECONNECTIONUIVIEWCONTROLLER_H

@protocol TableViewManagerDelegate;


#import "AssistantSubUIViewController.h"

@interface PPPoEConnectionUIViewController : AssistantSubUIViewController <TableViewManagerDelegate>





-(void)loadView;
-(void)touchInCellAtIndexPath:(id)arg0 ;


@end


#endif