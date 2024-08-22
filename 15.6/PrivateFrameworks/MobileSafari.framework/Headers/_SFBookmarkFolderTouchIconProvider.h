// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFBOOKMARKFOLDERTOUCHICONPROVIDER_H
#define _SFBOOKMARKFOLDERTOUCHICONPROVIDER_H

@class WBSBookmarkFolderTouchIconProvider, WebBookmarkCollection;
@protocol OS_dispatch_queue;



@interface _SFBookmarkFolderTouchIconProvider : WBSBookmarkFolderTouchIconProvider {
    WebBookmarkCollection *_collection;
    NSObject<OS_dispatch_queue> *_bookmarkCollectionAccessQueue;
}




-(BOOL)canHandleRequest:(id)arg0 ;
-(id)backgroundColor;
-(id)bookmarkUUIDForRequest:(id)arg0 ;
-(id)defaultFolderIconForRequest:(id)arg0 ;
-(id)displayableFolderContentsForRequest:(id)arg0 ;
-(id)init;
-(id)touchIconRequestForBookmark:(id)arg0 inFolderWithRequest:(id)arg1 ;
-(void)_folderContentsDidChange:(id)arg0 ;


@end


#endif