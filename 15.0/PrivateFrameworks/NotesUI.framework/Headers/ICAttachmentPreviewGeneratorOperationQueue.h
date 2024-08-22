// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICATTACHMENTPREVIEWGENERATOROPERATIONQUEUE_H
#define ICATTACHMENTPREVIEWGENERATOROPERATIONQUEUE_H

@class NSOperationQueue;



@interface ICAttachmentPreviewGeneratorOperationQueue : NSOperationQueue

@property (nonatomic) NSUInteger suspendCount; // ivar: _suspendCount


-(void)cancelOperationsForAttachment:(id)arg0 ;
-(void)resume;
-(void)suspend;


@end


#endif