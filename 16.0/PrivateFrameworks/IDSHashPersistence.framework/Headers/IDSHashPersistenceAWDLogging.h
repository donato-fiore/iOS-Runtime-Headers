// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSHASHPERSISTENCEAWDLOGGING_H
#define IDSHASHPERSISTENCEAWDLOGGING_H

@class AWDServerConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IDSHashPersistenceAWDLogging : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    AWDServerConnection *_AWDServerConnection;
}




+(id)sharedInstance;
-(BOOL)shouldSubmit;
-(id)_metricContainerForMetricType:(unsigned int)arg0 ;
-(id)init;
-(void)_submitAWDMetric:(id)arg0 withContainer:(id)arg1 ;
-(void)dealloc;
-(void)duplicateMessageEncounted;


@end


#endif