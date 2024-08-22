// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDATTACHMENTSYNDICATIONUTILITIES_H
#define IMDATTACHMENTSYNDICATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface IMDAttachmentSyndicationUtilities : NSObject



+(BOOL)_attachmentRecordIsSyndicatable:(id)arg0 attachmentGUID:(id)arg1 syndicationIdentifier:(id)arg2 attachmentUTI:(id)arg3 attributedBody:(id)arg4 encodedSyndicationRanges:(id)arg5 verbose:(BOOL)arg6 ;
+(BOOL)attachmentRecordIsSyndicatable:(id)arg0 verbose:(BOOL)arg1 ;
+(id)_syndicationIdentifierForAttachmentRecord:(id)arg0 attachmentGUID:(id)arg1 messageGUID:(id)arg2 attributedBody:(id)arg3 verbose:(BOOL)arg4 ;


@end


#endif