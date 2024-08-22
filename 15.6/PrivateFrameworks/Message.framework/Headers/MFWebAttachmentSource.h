// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFWEBATTACHMENTSOURCE_H
#define MFWEBATTACHMENTSOURCE_H

@class MFLock, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MFWebAttachmentSource : NSObject {
    MFLock *_attachmentsLock;
    NSMutableDictionary *_attachmentsByURL;
}




+(id)_setOfAllSources;
+(id)allSources;
-(BOOL)setAttachment:(id)arg0 forURL:(id)arg1 ;
-(id)attachmentForURL:(id)arg0 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)removeAttachmentForURL:(id)arg0 ;


@end


#endif