// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC26DOCUMENTMANAGEREXECUTABLES23DOCQUICKLOOKINFOPREVIEW_H
#define _TTC26DOCUMENTMANAGEREXECUTABLES23DOCQUICKLOOKINFOPREVIEW_H

@class QLPreviewController;



@interface _TtC26DocumentManagerExecutables23DOCQuickLookInfoPreview : QLPreviewController {
    ? item;
    ? qlItem;
}


@property (nonatomic, readonly) NSUInteger presentationMode;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithPreviewItems:(id)arg0 ;


@end


#endif