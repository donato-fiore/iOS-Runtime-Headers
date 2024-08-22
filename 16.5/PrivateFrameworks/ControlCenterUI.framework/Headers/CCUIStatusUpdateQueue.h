// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUISTATUSUPDATEQUEUE_H
#define CCUISTATUSUPDATEQUEUE_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CCUIStatusUpdateQueue : NSObject {
    NSMutableArray *_queuedIdentifiers;
    NSMutableDictionary *_latestUpdateByIdentifier;
}




-(id)dequeueNextStatusUpdate;
-(id)init;
-(void)enqueueStatusUpdate:(id)arg0 forIdentifier:(id)arg1 ;
-(void)removeAllStatusUpdates;


@end


#endif