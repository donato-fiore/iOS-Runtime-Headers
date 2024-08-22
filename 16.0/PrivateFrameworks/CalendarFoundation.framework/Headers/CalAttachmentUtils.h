// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALATTACHMENTUTILS_H
#define CALATTACHMENTUTILS_H


#import <Foundation/Foundation.h>


@interface CalAttachmentUtils : NSObject



+(BOOL)attachmentURL:(id)arg0 matchesServerURL:(id)arg1 ;
+(id)_knownTLDForHostname:(id)arg0 ;
+(id)_stripSubdomain:(id)arg0 ;
+(id)attachmentContainerForSourceIdentifier:(id)arg0 calendarDataContainer:(id)arg1 ;
+(id)attachmentContainerWithBaseURL:(id)arg0 ;
+(id)getFileSizeForPath:(id)arg0 fileManager:(id)arg1 error:(*id)arg2 ;
+(id)legacyAttachmentContainerWithBaseURL:(id)arg0 ;
+(id)legacyCalendarDataContainer;
+(id)localRelativePathForLocalAbsoluteURL:(id)arg0 localBaseURL:(id)arg1 ;
+(id)localURLForAttachmentWithRelativePath:(id)arg0 baseURL:(id)arg1 ;


@end


#endif