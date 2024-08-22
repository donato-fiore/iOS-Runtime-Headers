// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICLEGACYNOTEUTILITIES_H
#define ICLEGACYNOTEUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICLegacyNoteUtilities : NSObject



+(id)temporaryTextStorageWithAttributedString:(id)arg0 replicaID:(id)arg1 styler:(id)arg2 ;
+(void)copyValuesFromLegacyNote:(id)arg0 toNote:(id)arg1 styler:(id)arg2 attachmentPreviewGenerator:(id)arg3 ;
+(void)importLegacyNote:(id)arg0 temporaryTextStorage:(id)arg1 toNote:(id)arg2 attachmentPreviewGenerator:(id)arg3 ;


@end


#endif