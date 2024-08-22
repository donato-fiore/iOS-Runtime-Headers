// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSVOICETRIGGERALWAYSONPROCESSOR_H
#define CSVOICETRIGGERALWAYSONPROCESSOR_H

@class AVVoiceTriggerClient;
@protocol OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSVoiceTriggerAlwaysOnProcessor : NSObject {
    AVVoiceTriggerClient *_alwaysOnProcessorController;
    NSObject<OS_dispatch_group> *_aopSwitchGroup;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)init;
-(void)_setBuiltInRTModelDictionary:(id)arg0 ;
-(void)disableVoiceTriggerOnAlwaysOnProcessorWithCompletion:(id)arg0 ;
-(void)enableVoiceTriggerOnAlwaysOnProcessorWithAsset:(id)arg0 completion:(id)arg1 ;


@end


#endif