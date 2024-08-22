// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCACTIVITYVIEWCONTROLLER_H
#define DCACTIVITYVIEWCONTROLLER_H

@class UIActivityViewController;


#import "ICDocCamDocumentInfoCollection.h"
#import "ICDocCamImageCache.h"

@interface DCActivityViewController : UIActivityViewController

@property (retain, nonatomic) ICDocCamDocumentInfoCollection *documentInfoCollection; // ivar: _documentInfoCollection
@property (nonatomic) BOOL ignoreAttachmentsForCopyToPasteboard; // ivar: _ignoreAttachmentsForCopyToPasteboard
@property (retain, nonatomic) ICDocCamImageCache *imageCache; // ivar: _imageCache


-(BOOL)_canShowWhileLocked;
-(BOOL)inhibitPDFGenerationForActivityType:(id)arg0 ;
-(BOOL)writeGalleryPDFDataToPasteboardIfNecessaryForActivity:(id)arg0 documentInfoCollection:(id)arg1 ;
-(id)activityTypesThatInhibitPDFGeneration;
-(void)_performActivity:(id)arg0 ;


@end


#endif