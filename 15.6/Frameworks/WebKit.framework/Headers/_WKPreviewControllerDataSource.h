// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _WKPREVIEWCONTROLLERDATASOURCE_H
#define _WKPREVIEWCONTROLLERDATASOURCE_H

@class NSString;
@protocol QLPreviewControllerDataSource, ARQuickLookWebKitItemDelegate;

#import <Foundation/Foundation.h>


@interface _WKPreviewControllerDataSource : NSObject <QLPreviewControllerDataSource, ARQuickLookWebKitItemDelegate>

 {
    RetainPtr<NSItemProvider> _itemProvider;
    RetainPtr<ARQuickLookWebKitItem> _item;
    URL _originatingPageURL;
    URL _downloadedURL;
    *void _previewController;
}


@property (copy) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSString *mimeType; // ivar: _mimeType
@property (readonly) Class superclass;


-(NSInteger)numberOfPreviewItemsInPreviewController:(id)arg0 ;
-(id)initWithSystemPreviewController:(*void)arg0 MIMEType:(id)arg1 originatingPageURL:(struct URL )arg2 ;
-(id)previewController:(id)arg0 previewItemAtIndex:(NSInteger)arg1 ;
-(void)dealloc;
-(void)failWithError:(id)arg0 ;
-(void)finish:(struct URL )arg0 ;
-(void)previewItem:(id)arg0 didReceiveMessage:(id)arg1 ;
-(void)setProgress:(float)arg0 ;


@end


#endif