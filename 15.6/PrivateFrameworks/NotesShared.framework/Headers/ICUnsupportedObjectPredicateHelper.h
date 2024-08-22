// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICUNSUPPORTEDOBJECTPREDICATEHELPER_H
#define ICUNSUPPORTEDOBJECTPREDICATEHELPER_H


#import <Foundation/Foundation.h>


@interface ICUnsupportedObjectPredicateHelper : NSObject



+(id)predicateForSupportedAttachmentsInContext:(id)arg0 ;
+(id)predicateForSupportedFoldersInContext:(id)arg0 ;
+(id)predicateForSupportedInlineAttachmentsInContext:(id)arg0 ;
+(id)predicateForSupportedNotesInContext:(id)arg0 ;
+(id)unitTest_unsupportedAttachmentIdentifiersWithContext:(id)arg0 ;
+(id)unitTest_unsupportedFolderIdentifiersWithContext:(id)arg0 ;
+(id)unsupportedAttachmentIdentifiersWithContext:(id)arg0 ;
+(id)unsupportedFolderIdentifiersWithContext:(id)arg0 ;
+(id)unsupportedInlineAttachmentIdentifiersWithContext:(id)arg0 ;
+(void)recursivelyAddAttachment:(id)arg0 toMutableSet:(id)arg1 ;
+(void)recursivelyAddFolder:(id)arg0 toMutableSet:(id)arg1 ;


@end


#endif