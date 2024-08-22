// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDELETEATTACHMENTREFERENCEOPERATION_H
#define HDDELETEATTACHMENTREFERENCEOPERATION_H

@class NSArray;


#import "HDJournalableOperation.h"

@interface HDDeleteAttachmentReferenceOperation : HDJournalableOperation {
    NSArray *_references;
    NSInteger _cloudStatus;
}




+(BOOL)supportsSecureCoding;
-(BOOL)performWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReferences:(id)arg0 ;
-(id)initWithSynchronizedReferences:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif