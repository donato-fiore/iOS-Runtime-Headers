// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICAPPURLUTILITIES_H
#define ICAPPURLUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICAppURLUtilities : NSObject



+(BOOL)isHTMLFolderEntityURI:(id)arg0 ;
+(BOOL)isHTMLNoteEntityURI:(id)arg0 ;
+(BOOL)isLaunchingQuickNoteViaPencil:(id)arg0 ;
+(BOOL)isModernFolderEntityURI:(id)arg0 ;
+(BOOL)isModernNoteEntityURI:(id)arg0 ;
+(BOOL)isNewNoteURL:(id)arg0 ;
+(BOOL)isQuickNoteModeURL:(id)arg0 ;
+(BOOL)isShowDefaultFolderURL:(id)arg0 ;
+(BOOL)isShowFolderListURL:(id)arg0 ;
+(BOOL)isShowFolderURL:(id)arg0 ;
+(BOOL)isShowFolderURL:(id)arg0 options:(NSUInteger)arg1 ;
+(BOOL)isShowHTMLFolderURL:(id)arg0 ;
+(BOOL)isShowHTMLFolderURL:(id)arg0 options:(NSUInteger)arg1 ;
+(BOOL)isShowHTMLNoteURL:(id)arg0 ;
+(BOOL)isShowLegacyNoteURL:(id)arg0 ;
+(BOOL)isShowNoteFocusedInFolderURL:(id)arg0 ;
+(BOOL)isShowNoteURL:(id)arg0 ;
+(BOOL)isShowNoteURL:(id)arg0 options:(NSUInteger)arg1 ;
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
+(id)appURLForNote:(id)arg0 inFolder:(id)arg1 ;
+(id)appURLForShowSmartFoldersHelp;
+(id)attachmentIdentifierFromQuickNoteURL:(id)arg0 ;
+(id)contentOffsetFromQuickNoteURL:(id)arg0 ;
+(id)firstQueryItemInURL:(id)arg0 andHost:(id)arg1 andQueryItemName:(id)arg2 ;
+(id)folderIdentifierForShowNoteURL:(id)arg0 ;
+(id)modernNoteIdentifierFromEntityURI:(id)arg0 ;
+(id)noteIdentifierFromQuickNoteURL:(id)arg0 ;
+(id)objectIDForHTMLFolderEntityURI:(id)arg0 context:(id)arg1 ;
+(id)objectIDForHTMLFolderMentionedInURL:(id)arg0 context:(id)arg1 ;
+(id)objectIDForHTMLFolderMentionedInURL:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 ;
+(id)objectIDForModernFolderEntityURI:(id)arg0 noteContext:(id)arg1 ;
+(id)objectIDForModernFolderMentionedInURL:(id)arg0 noteContext:(id)arg1 ;
+(id)objectIDForModernFolderMentionedInURL:(id)arg0 options:(NSUInteger)arg1 noteContext:(id)arg2 ;
+(id)objectIDURIRepresentationForFolderMentionedInLegacyShowFolderURL:(id)arg0 ;
+(id)objectIDURIRepresentationForFolderMentionedInLegacyShowHTMLFolderURL:(id)arg0 ;
+(id)objectIDURIRepresentationForHTMLNoteEntityURI:(id)arg0 context:(id)arg1 ;
+(id)objectIDURIRepresentationForHTMLNoteMentionedInURL:(id)arg0 ;
+(id)predicateForFolderWithNoteFocusedInURL:(id)arg0 ;
+(id)predicateForNoteMentionedInURL:(id)arg0 ;
+(id)predicateForNoteMentionedInURL:(id)arg0 action:(id)arg1 ;
+(id)predicateForNoteMentionedInURL:(id)arg0 action:(id)arg1 queryItemName:(id)arg2 ;
+(id)predicateForNoteWithIdentifier:(id)arg0 ;
+(id)referralURLForSnapshotBackgroundTask;
+(id)urlForQuickNoteWithOptions:(id)arg0 ;


@end


#endif