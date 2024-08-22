// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCMARKUPUTILITIES_H
#define DCMARKUPUTILITIES_H


#import <Foundation/Foundation.h>


@interface DCMarkupUtilities : NSObject



+(BOOL)hasPrivateImageMetadata:(id)arg0 ;
+(id)cleanImageMetadataFromData:(id)arg0 ;
+(id)createMarkupViewController;
+(id)createProcessingMarkupViewControllerOutWindow:(*id)arg0 ;
+(id)dataToEditForDocumentInfo:(id)arg0 imageCache:(id)arg1 includeMarkupModelData:(BOOL)arg2 ;
+(id)dataToEditForDocumentInfo:(id)arg0 includeMarkupModelData:(BOOL)arg1 imageCache:(id)arg2 embedMarkupModelDataInImage:(BOOL)arg3 ;
+(id)imageDataWithMarkupModelData:(id)arg0 sourceImageData:(id)arg1 ;
+(id)imageDataWithMarkupModelData:(id)arg0 sourceImageData:(id)arg1 embedData:(BOOL)arg2 ;
+(id)imageDataWithMarkupModelData:(id)arg0 sourceImageURL:(id)arg1 ;
+(id)markupModelDataFromData:(id)arg0 ;
+(id)markupModelDataFromDataAtURL:(id)arg0 ;
+(void)applyMarkupModelData:(id)arg0 documentInfo:(id)arg1 completionBlock:(id)arg2 ;
+(void)applyReturnedMarkupURL:(id)arg0 documentInfo:(id)arg1 completionBlock:(id)arg2 ;
+(void)extractReturnedMarkupURL:(id)arg0 documentInfo:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif