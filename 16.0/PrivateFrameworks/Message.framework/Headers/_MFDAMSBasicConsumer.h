// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFDAMSBASICCONSUMER_H
#define _MFDAMSBASICCONSUMER_H



#import "MFBufferedQueue.h"
#import "MFDAMailbox.h"
#import "MFDAMessageStore.h"
#import "MFMailMessageLibrary.h"
#import "MFError.h"
#import "MFActivityMonitor.h"

@interface _MFDAMSBasicConsumer : MFBufferedQueue {
    MFDAMailbox *mailbox;
    MFDAMessageStore *store;
    MFMailMessageLibrary *library;
    NSUInteger numNewMessages;
}


@property (retain, nonatomic) MFError *error; // ivar: error
@property (retain, nonatomic) MFActivityMonitor *monitor; // ivar: monitor


-(id)initWithMaximumSize:(unsigned int)arg0 latency:(CGFloat)arg1 ;
-(void)dealloc;


@end


#endif