// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLBASEPREVIEWPARTS_H
#define QLBASEPREVIEWPARTS_H



#import "QLPreviewConverterParts.h"

@interface QLBasePreviewParts : QLPreviewConverterParts



+(*unk)dataCallbackForUTI:(id)arg0 andSize:(NSUInteger)arg1 ;
+(*unk)urlCallbackForUTI:(id)arg0 ;
+(BOOL)canConvertDocumentType:(id)arg0 ;
+(BOOL)isBundleURL:(id)arg0 ;
-(void)computePreview;


@end


#endif