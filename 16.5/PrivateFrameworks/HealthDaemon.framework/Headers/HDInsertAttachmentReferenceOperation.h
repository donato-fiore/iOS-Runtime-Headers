// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDINSERTATTACHMENTREFERENCEOPERATION_H
#define HDINSERTATTACHMENTREFERENCEOPERATION_H



#import "HDJournalableOperation.h"
#import "HDAttachmentReference.h"

@interface HDInsertAttachmentReferenceOperation : HDJournalableOperation {
    HDAttachmentReference *_reference;
}




+(BOOL)supportsSecureCoding;
-(BOOL)performWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReference:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif