// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDATTACHMENTENTITY_H
#define HDATTACHMENTENTITY_H



#import "HDHealthEntity.h"

@interface HDAttachmentEntity : HDHealthEntity



+(BOOL)enumerateAttachmentsWithPredicate:(id)arg0 transaction:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(NSInteger)protectionClass;
+(id)_insertAttachment:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)_insertIfDoesNotExistAttachment:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)attachmentWithIdentifier:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)attachmentWithIdentifier:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)databaseTable;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif