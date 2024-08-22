// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIARQLPREVIEWCONTROLLER_H
#define VUIARQLPREVIEWCONTROLLER_H

@class QLPreviewController, ARQuickLookPreviewItem, ARQuickLookWebKitItem;
@protocol QLPreviewControllerDataSource;



@interface VUIARQLPreviewController : QLPreviewController <QLPreviewControllerDataSource>



@property (retain, nonatomic) ARQuickLookPreviewItem *quickLookPreviewItem; // ivar: _quickLookPreviewItem
@property (retain, nonatomic) ARQuickLookWebKitItem *quickLookWebKitItem; // ivar: _quickLookWebKitItem


-(NSInteger)numberOfPreviewItemsInPreviewController:(id)arg0 ;
-(id)initWithQuickLookPreviewItem:(id)arg0 ;
-(id)initWithQuickLookWebKitItem:(id)arg0 ;
-(id)previewController:(id)arg0 previewItemAtIndex:(NSInteger)arg1 ;


@end


#endif