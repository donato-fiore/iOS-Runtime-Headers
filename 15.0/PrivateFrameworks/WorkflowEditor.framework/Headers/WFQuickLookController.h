// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFQUICKLOOKCONTROLLER_H
#define WFQUICKLOOKCONTROLLER_H

@class QLPreviewController, NSTimer, NSMutableIndexSet;
@protocol WFQuickLookRefreshing;



@interface WFQuickLookController : QLPreviewController <WFQuickLookRefreshing>



@property (nonatomic, getter=isEmbedded) BOOL embedded; // ivar: _embedded
@property (retain, nonatomic) NSTimer *indexTimer; // ivar: _indexTimer
@property (retain, nonatomic) NSMutableIndexSet *indexesPendingRefresh; // ivar: _indexesPendingRefresh
@property (nonatomic) NSInteger lastIndex; // ivar: _lastIndex


-(id)activityItemForDocumentInteractionController:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)_updateAppearance:(BOOL)arg0 ;
-(void)updateCurrentIndex;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)wf_refreshPreviewItemAtIndex:(NSInteger)arg0 ;


@end


#endif