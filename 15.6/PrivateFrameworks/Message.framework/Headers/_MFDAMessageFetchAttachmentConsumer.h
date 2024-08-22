// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFDAMESSAGEFETCHATTACHMENTCONSUMER_H
#define _MFDAMESSAGEFETCHATTACHMENTCONSUMER_H

@class MFProgressFilterDataConsumer;
@protocol DAMessageFetchAttachmentConsumer;


#import "MFDAMailAccountConsumer.h"
#import "MFActivityMonitor.h"

@interface _MFDAMessageFetchAttachmentConsumer : MFDAMailAccountConsumer <DAMessageFetchAttachmentConsumer>

 {
    NSUInteger _accumulatedLength;
    MFActivityMonitor *_monitor;
}


@property (readonly) BOOL dataWasBase64; // ivar: _dataWasBase64
@property (nonatomic) NSUInteger expectedLength; // ivar: _expectedLength
@property (readonly) BOOL fetchSucceeded; // ivar: _fetchSucceeded
@property (retain, nonatomic) MFProgressFilterDataConsumer *progressFilter; // ivar: _progressFilter


-(id)initWithActivityMonitor:(id)arg0 ;
-(void)attachmentFetchCompletedWithStatus:(NSInteger)arg0 forAttachmentNamed:(id)arg1 ofMessageWithServerID:(id)arg2 dataWasBase64:(BOOL)arg3 sentBytesCount:(NSUInteger)arg4 receivedBytesCount:(NSUInteger)arg5 ;
-(void)consumeData:(id)arg0 ofContentType:(id)arg1 forAttachmentNamed:(id)arg2 ofMessageWithServerID:(id)arg3 ;


@end


#endif