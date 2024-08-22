// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFMESSAGECOLLECTOR_H
#define _MFMESSAGECOLLECTOR_H

@class NSMutableArray;
@protocol MessageConsumer, QueryProgressMonitor;

#import <Foundation/Foundation.h>

#import "MFActivityMonitor.h"

@interface _MFMessageCollector : NSObject <MessageConsumer, QueryProgressMonitor>

 {
    NSMutableArray *_messages;
    MFActivityMonitor *_monitor;
}


@property (copy, nonatomic) id *transmogrifier; // ivar: _transmogrifier


-(BOOL)shouldCancel;
-(id)copyMessages;
-(id)init;
-(id)messages;
-(void)newMessagesAvailable:(id)arg0 ;


@end


#endif