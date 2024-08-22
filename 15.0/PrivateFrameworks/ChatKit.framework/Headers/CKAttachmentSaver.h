// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKATTACHMENTSAVER_H
#define CKATTACHMENTSAVER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface CKAttachmentSaver : NSObject {
    NSUInteger _errorCount;
    NSMutableArray *_attachments;
}




-(id)initWithAttachments:(id)arg0 ;
-(void)_pop;
-(void)_saveCompletion:(id)arg0 ;
-(void)_saveCompletionForImage:(id)arg0 error:(id)arg1 context:(*void)arg2 ;
-(void)_saveCompletionForVideoWithPath:(id)arg0 error:(id)arg1 context:(*void)arg2 ;
-(void)_saveNextAttachment;
-(void)popAndSaveNextAttachment;
-(void)runToCompletion;


@end


#endif