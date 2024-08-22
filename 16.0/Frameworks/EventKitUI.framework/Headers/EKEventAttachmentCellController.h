// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKEVENTATTACHMENTCELLCONTROLLER_H
#define EKEVENTATTACHMENTCELLCONTROLLER_H

@class EKAttachment, NSString;
@protocol QLPreviewControllerDelegate, EKEventAttachmentCellControllerDelegate;

#import <Foundation/Foundation.h>

#import "EKEventAttachmentCell.h"

@interface EKEventAttachmentCellController : NSObject <QLPreviewControllerDelegate>

 {
    id *_downloadID;
    BOOL _sourceIsManaged;
}


@property (retain, nonatomic) EKAttachment *attachment; // ivar: _attachment
@property (readonly) EKEventAttachmentCell *cell; // ivar: _cell
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EKEventAttachmentCellControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_attachmentIsViewable:(id)arg0 ;
+(id)_cannotOpenAttachmentLocalizedString;
+(id)_keyForAttachment:(id)arg0 ;
+(id)_okLocalizedString;
+(id)cellControllersForAttachments:(id)arg0 givenExistingControllers:(id)arg1 sourceIsManaged:(BOOL)arg2 ;
-(NSUInteger)supportedInterfaceOrientationMaskForInterfaceOrientation:(NSInteger)arg0 ;
-(id)_downloadProgressStringWithDownloadedBytes:(id)arg0 outOfTotalBytes:(id)arg1 ;
-(id)event;
-(id)initWithAttachment:(id)arg0 sourceIsManaged:(BOOL)arg1 ;
-(void)_clearDownloadID;
-(void)_openExternalAttachmentURLInBrowser:(id)arg0 ;
-(void)_presentPreviewAttachmentInPreviewWithInfo:(id)arg0 ;
-(void)_presentPreviewWithURL:(id)arg0 filename:(id)arg1 ;
-(void)previewControllerWillDismiss:(id)arg0 ;
-(void)promptToDownloadAttachment;
-(void)startAttachmentDownload;
-(void)tearDown;


@end


#endif