// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSVOICETRIGGERASSETCHANGEMONITOR_H
#define CSVOICETRIGGERASSETCHANGEMONITOR_H

@protocol OS_dispatch_queue, CSVoiceTriggerAssetChangeDelegate;

#import <Foundation/Foundation.h>


@interface CSVoiceTriggerAssetChangeMonitor : NSObject {
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (weak, nonatomic) NSObject<CSVoiceTriggerAssetChangeDelegate> *delegate; // ivar: _delegate


+(id)sharedMonitor;
-(id)init;
-(void)notifyVoiceTriggerAssetChanged;
-(void)startMonitoring;


@end


#endif