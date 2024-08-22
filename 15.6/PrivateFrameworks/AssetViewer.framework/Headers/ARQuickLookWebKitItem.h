// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARQUICKLOOKWEBKITITEM_H
#define ARQUICKLOOKWEBKITITEM_H

@class QLItem, NSDictionary, NSString, ARQuickLookPreviewItem;
@protocol QLPreviewItemPrivateCustomExtensionHandling, ARQuickLookWebKitItemDelegate;



@interface ARQuickLookWebKitItem : QLItem <QLPreviewItemPrivateCustomExtensionHandling>



@property (copy, nonatomic) NSDictionary *additionalParameters; // ivar: _additionalParameters
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ARQuickLookWebKitItemDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ARQuickLookPreviewItem *previewItem; // ivar: _previewItem
@property (readonly) Class superclass;


-(id)initWithDataProvider:(id)arg0 contentType:(id)arg1 previewTitle:(id)arg2 previewItem:(id)arg3 ;
-(id)initWithPreviewItemProvider:(id)arg0 contentType:(id)arg1 previewTitle:(id)arg2 fileSize:(id)arg3 previewItem:(id)arg4 ;
-(id)previewOptions;
-(void)handleMessageFromCustomExtension:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif