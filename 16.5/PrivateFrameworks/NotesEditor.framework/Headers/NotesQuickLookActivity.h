// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NOTESQUICKLOOKACTIVITY_H
#define NOTESQUICKLOOKACTIVITY_H

@class UIActivity, NSString;
@protocol QLPreviewControllerDataSource, QLPreviewControllerDelegate;


#import "NotesQuickLookActivityItem.h"

@interface NotesQuickLookActivity : UIActivity <QLPreviewControllerDataSource, QLPreviewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NotesQuickLookActivityItem *item; // ivar: _item
@property (nonatomic) BOOL sourceIsManaged; // ivar: _sourceIsManaged
@property (readonly) Class superclass;


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(NSInteger)numberOfPreviewItemsInPreviewController:(id)arg0 ;
-(id)_beforeActivity;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)previewController:(id)arg0 previewItemAtIndex:(NSInteger)arg1 ;
-(id)previewController:(id)arg0 transitionImageForPreviewItem:(id)arg1 contentRect:(struct CGRect *)arg2 ;
-(struct CGRect )previewController:(id)arg0 frameForPreviewItem:(id)arg1 inSourceView:(*id)arg2 ;
-(void)_cleanup;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;
-(void)presentPreviewController;


@end


#endif