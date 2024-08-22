// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUISTILLWATCHINGALERTPRESENTER_H
#define VUISTILLWATCHINGALERTPRESENTER_H


#import <Foundation/Foundation.h>


@interface VUIStillWatchingAlertPresenter : NSObject

@property (nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval


+(void)presentWithTitle:(id)arg0 presentingController:(id)arg1 timeout:(CGFloat)arg2 responseHandler:(id)arg3 ;


@end


#endif