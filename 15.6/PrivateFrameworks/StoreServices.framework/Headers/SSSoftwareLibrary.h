// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSSOFTWARELIBRARY_H
#define SSSOFTWARELIBRARY_H


#import <Foundation/Foundation.h>

#import "SSXPCConnection.h"

@interface SSSoftwareLibrary : NSObject {
    SSXPCConnection *_connection;
}




-(id)init;
-(void)_getItemsWithMessage:(id)arg0 completionBlock:(id)arg1 ;
-(void)_sendDemotionMessage:(id)arg0 completionBlock:(id)arg1 ;
-(void)demoteApplicationWithBundleIdentifier:(id)arg0 completionBlock:(id)arg1 ;
-(void)getLibraryItemForBundleIdentifiers:(id)arg0 completionBlock:(id)arg1 ;
-(void)getLibraryItemsForITunesStoreItemIdentifiers:(id)arg0 completionBlock:(id)arg1 ;
-(void)getRemovableSytemApplicationsWithCompletionBlock:(id)arg0 ;
-(void)hasDemotedApplicationsWithCompletionBlock:(id)arg0 ;
-(void)isInstalledApplicationWithBundleIdentifier:(id)arg0 completionBlock:(id)arg1 ;
-(void)isRemovedSystemApplicationWithBundleIdentifier:(id)arg0 completionBlock:(id)arg1 ;
-(void)playableApplicationsWithBundleIdentifiers:(id)arg0 completionBlock:(id)arg1 ;
-(void)refreshReceiptsWithCompletionBlock:(id)arg0 ;
-(void)restoreAllDemotedApplicationsWithOptions:(id)arg0 completionBlock:(id)arg1 ;
-(void)restoreDemotedApplicationWithBundleIdentifier:(id)arg0 options:(id)arg1 completionBlock:(id)arg2 ;
-(void)restoreRemovedSystemApplicationWithBundleIdentifier:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif