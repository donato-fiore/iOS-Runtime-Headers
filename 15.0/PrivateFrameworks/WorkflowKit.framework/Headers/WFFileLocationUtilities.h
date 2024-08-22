// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFFILELOCATIONUTILITIES_H
#define WFFILELOCATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface WFFileLocationUtilities : NSObject



+(BOOL)isFileURL:(id)arg0 withParentItems:(id)arg1 insideFolderType:(NSUInteger)arg2 ;
+(id)bundleIdentifierForItem:(id)arg0 ;
+(id)desktopDirectory;
+(id)displayNameForURL:(id)arg0 ;
+(id)documentsDirectory;
+(id)documentsURLForApplicationContainerBundleID:(id)arg0 ;
+(id)downloadsDirectory;
+(id)fetchRootItemURLForDomainWithID:(id)arg0 ;
+(id)iCloudDesktopDirectory;
+(id)iCloudDocumentsDirectory;
+(id)iCloudDownloadsDirectory;
+(id)itemForURL:(id)arg0 error:(*id)arg1 ;
+(id)mobileDocumentsDirectory;
+(id)parentItemsForItem:(id)arg0 ;
+(id)providerDisplayNameForURL:(id)arg0 error:(*id)arg1 ;
+(id)rootItemForItem:(id)arg0 ;


@end


#endif