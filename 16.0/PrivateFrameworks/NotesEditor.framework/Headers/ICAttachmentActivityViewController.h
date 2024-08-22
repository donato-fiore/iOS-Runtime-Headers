// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICATTACHMENTACTIVITYVIEWCONTROLLER_H
#define ICATTACHMENTACTIVITYVIEWCONTROLLER_H

@class UIActivityViewController, NSArray;



@interface ICAttachmentActivityViewController : UIActivityViewController

@property (retain, nonatomic) NSArray *attachments; // ivar: _attachments
@property (nonatomic) BOOL ignoreAttachmentsForCopyToPasteboard; // ivar: _ignoreAttachmentsForCopyToPasteboard


-(BOOL)inhibitPDFGenerationForActivityType:(id)arg0 ;
-(BOOL)writeGalleryPDFDataToPasteboardIfNecessaryForActivity:(id)arg0 attachments:(id)arg1 ;
-(id)activityTypesThatInhibitPDFGeneration;
-(void)_performActivity:(id)arg0 ;


@end


#endif