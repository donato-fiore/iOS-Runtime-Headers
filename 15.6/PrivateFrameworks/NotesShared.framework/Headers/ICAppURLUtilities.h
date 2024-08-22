// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICAPPURLUTILITIES_H
#define ICAPPURLUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICAppURLUtilities : NSObject



+(BOOL)isLaunchingQuickNoteViaPencil:(id)arg0 ;
+(BOOL)isNewNoteURL:(id)arg0 ;
+(BOOL)isQuickNoteModeURL:(id)arg0 ;
+(BOOL)isShowDefaultFolderURL:(id)arg0 ;
+(BOOL)isShowFolderListURL:(id)arg0 ;
+(BOOL)isShowFolderURL:(id)arg0 ;
+(BOOL)isShowHTMLFolderURL:(id)arg0 ;
+(BOOL)isShowHTMLNoteURL:(id)arg0 ;
+(BOOL)isShowLegacyNoteURL:(id)arg0 ;
+(BOOL)isShowNoteFocusedInFolderURL:(id)arg0 ;
+(BOOL)isShowNoteURL:(id)arg0 ;
+(BOOL)isShowPaperURL:(id)arg0 ;
+(BOOL)isShowSmartFoldersHelpURL:(id)arg0 ;
+(BOOL)isSystemPaperURL:(id)arg0 ;
+(BOOL)quickNoteURLIsContinuing:(id)arg0 ;
+(BOOL)quickNoteURLShouldShowList:(id)arg0 ;
+(BOOL)quickNoteURLShouldShowShareSheet:(id)arg0 ;
+(BOOL)quickNoteURLShouldShowiCloudShareSheet:(id)arg0 ;
+(id)appURLForContainingFolderWithNoteFocused:(id)arg0 ;
+(id)appURLForDefaultFolder;
+(id)appURLForFolder:(id)arg0 ;
+(id)appURLForFolderList;
+(id)appURLForHTMLFolder:(id)arg0 ;
+(id)appURLForHTMLNote:(id)arg0 ;
+(id)appURLForNote:(id)arg0 ;
+(id)appURLforShowSmartFoldersHelp;
+(id)attachmentIdentifierFromQuickNoteURL:(id)arg0 ;
+(id)contentOffsetFromQuickNoteURL:(id)arg0 ;
+(id)firstQueryItemInURL:(id)arg0 withURLScheme:(id)arg1 andHost:(id)arg2 andQueryItemName:(id)arg3 ;
+(id)noteIdentifierFromQuickNoteURL:(id)arg0 ;
+(id)objectIDURIRepresentationForFolderMentionedInURL:(id)arg0 ;
+(id)objectIDURIRepresentationForHTMLFolderMentionedInURL:(id)arg0 ;
+(id)objectIDURIRepresentationForHTMLNoteMentionedInURL:(id)arg0 ;
+(id)predicateForFolderWithNoteFocusedInURL:(id)arg0 ;
+(id)predicateForNoteMentionedInURL:(id)arg0 ;
+(id)predicateForNoteMentionedInURL:(id)arg0 action:(id)arg1 ;
+(id)referralURLForSnapshotBackgroundTask;
+(id)urlForQuickNoteWithOptions:(id)arg0 ;


@end


#endif