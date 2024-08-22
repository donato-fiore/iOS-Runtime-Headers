// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXAPPCLIPSETTINGSUPDATESOURCE_H
#define ATXAPPCLIPSETTINGSUPDATESOURCE_H

@protocol ATXUpdatePredictionsSource, OS_dispatch_queue, ATXUpdatePredictionsDelegate;

#import <Foundation/Foundation.h>


@interface ATXAppClipSettingsUpdateSource : NSObject <ATXUpdatePredictionsSource>

 {
    int _token;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (weak, nonatomic) NSObject<ATXUpdatePredictionsDelegate> *delegate; // ivar: _delegate


-(id)init;
-(void)handleSiriSettingsChangedNotification;
-(void)registerSiriSettingsChangedNotificationHandler;


@end


#endif