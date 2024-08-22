// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLTBULLETINSENDQUEUEATTACHMENTSENDER_H
#define BLTBULLETINSENDQUEUEATTACHMENTSENDER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface BLTBulletinSendQueueAttachmentSender : NSObject {
    NSMutableArray *_urls;
}




-(BOOL)sendAttachmentsWithSender:(id)arg0 timeout:(id)arg1 completion:(id)arg2 ;
-(id)init;
-(void)addAttachment:(id)arg0 key:(id)arg1 ;


@end


#endif