// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUCOMMENTSTABLEDATACONTROLLER_H
#define PUCOMMENTSTABLEDATACONTROLLER_H

@class NSCache, PHAsset, NSString, PLCloudSharedComment, PLManagedAsset, UITableView;
@protocol PLCloudCommentsChangeObserver, PUPhotoCommentEntryViewDelegate, UITableViewDelegate, UITableViewDataSource, PUCommentsTableDataControllerDelegate;

#import <Foundation/Foundation.h>

#import "PUPhotoCommentEntryView.h"

@interface PUCommentsTableDataController : NSObject <PLCloudCommentsChangeObserver, PUPhotoCommentEntryViewDelegate, UITableViewDelegate, UITableViewDataSource>

 {
    NSCache *_commentsHeightCache;
    PUPhotoCommentEntryView *_entryView;
    BOOL _hasPendingChanges;
}


@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUCommentsTableDataControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PLCloudSharedComment *justInsertedComment; // ivar: _justInsertedComment
@property (retain, nonatomic) PLManagedAsset *managedAsset; // ivar: _managedAsset
@property (readonly, nonatomic) CGFloat minimumHeight;
@property (nonatomic) BOOL shouldUseCompactCommentSeparators; // ivar: _shouldUseCompactCommentSeparators
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)_canPostCommentWithText:(id)arg0 localizedFailureDescription:(*id)arg1 ;
-(BOOL)_isAssetOwnerSectionVisible;
-(BOOL)photoCommentEntryViewShouldEndEditing:(id)arg0 ;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(BOOL)tableView:(id)arg0 shouldShowMenuForRowAtIndexPath:(id)arg1 ;
-(CGFloat)_heightForComment:(id)arg0 forWidth:(CGFloat)arg1 forInterfaceOrientation:(NSInteger)arg2 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_postCommentSection;
-(NSInteger)_smileCommentSection;
-(NSInteger)_textCommentSection;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_commentText;
-(id)_currentEntryView;
-(id)init;
-(id)initWithTableView:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_fontCacheDidChange:(id)arg0 ;
-(void)_postCommentWithText:(id)arg0 ;
-(void)_scrollToComment:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateFirstResponder;
-(void)_validateAndPostComment:(id)arg0 ;
-(void)cloudCommentsDidChange:(id)arg0 ;
-(void)dealloc;
-(void)photoCommentEntryViewDidBeginEditing:(id)arg0 ;
-(void)photoCommentEntryViewDidEndEditing:(id)arg0 ;
-(void)photoCommentEntryViewHeightDidChange:(id)arg0 ;
-(void)photoCommentEntryViewWillBeginEditing:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)tableView:(id)arg0 performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;


@end


#endif