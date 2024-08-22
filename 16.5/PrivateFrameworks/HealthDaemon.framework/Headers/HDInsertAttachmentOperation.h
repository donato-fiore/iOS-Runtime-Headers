// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDINSERTATTACHMENTOPERATION_H
#define HDINSERTATTACHMENTOPERATION_H

@class NSArray, HDAssertion;


#import "HDJournalableOperation.h"
#import "HDAttachment.h"

@interface HDInsertAttachmentOperation : HDJournalableOperation {
    HDAttachment *_attachment;
    NSArray *_attachmentReferences;
    BOOL _fileOnDisk;
    HDAssertion *_assertion;
}




+(BOOL)supportsSecureCoding;
-(BOOL)performWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)initWithAttachmentReferences:(id)arg0 attachment:(id)arg1 fileOnDisk:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)transactionContext;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif