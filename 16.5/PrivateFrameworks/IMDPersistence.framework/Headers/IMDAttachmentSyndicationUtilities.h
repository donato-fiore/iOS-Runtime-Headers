// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDATTACHMENTSYNDICATIONUTILITIES_H
#define IMDATTACHMENTSYNDICATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface IMDAttachmentSyndicationUtilities : NSObject



+(BOOL)_attachmentGUIDIsSyndicatable:(id)arg0 syndicationIdentifier:(id)arg1 attachmentUTI:(id)arg2 attributedBody:(id)arg3 encodedSyndicationRanges:(id)arg4 isCMM:(BOOL)arg5 verbose:(BOOL)arg6 ;
+(BOOL)attachmentRecordIsSyndicatable:(id)arg0 verbose:(BOOL)arg1 ;
+(NSUInteger)_attachmentSyndicationTypeForAttachmentGUID:(id)arg0 syndicationIdentifier:(id)arg1 attachmentUTI:(id)arg2 attributedBody:(id)arg3 encodedSyndicationRanges:(id)arg4 isCommSafetySensitive:(BOOL)arg5 verbose:(BOOL)arg6 ;
+(NSUInteger)syndicationTypeForAttachmentRecord:(id)arg0 verbose:(BOOL)arg1 ;
+(id)_syndicationIdentifierForAttachmentGUID:(id)arg0 messageGUID:(id)arg1 attributedBody:(id)arg2 verbose:(BOOL)arg3 ;
+(void)_attachmentGUIDForCMMIsSyndicatable:(id)arg0 syndicationIdentifier:(id)arg1 encodedSyndicationRanges:(id)arg2 isSyndicatable:(*BOOL)arg3 verbose:(BOOL)arg4 ;


@end


#endif