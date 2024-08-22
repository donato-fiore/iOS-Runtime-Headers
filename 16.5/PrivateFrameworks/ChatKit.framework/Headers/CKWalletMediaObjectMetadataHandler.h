// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKWALLETMEDIAOBJECTMETADATAHANDLER_H
#define CKWALLETMEDIAOBJECTMETADATAHANDLER_H


#import <Foundation/Foundation.h>


@interface CKWalletMediaObjectMetadataHandler : NSObject



+(BOOL)writePreviewMetadata:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(CGFloat)colorValueForKey:(id)arg0 inDictionary:(id)arg1 ;
+(id)colorDictionaryFromColor:(id)arg0 ;
+(id)colorFromDictionaryRepresentation:(id)arg0 ;
+(id)dictionaryRepresentationForText:(id)arg0 color:(id)arg1 ;
+(id)dictionaryRepresentationForText:(id)arg0 optionalColor:(id)arg1 ;
+(id)generateThumbnailFillToSize:(struct CGSize )arg0 contentAlignmentInsets:(struct UIEdgeInsets )arg1 presentationProperties:(id)arg2 ;
+(id)paddedImage:(id)arg0 horizontalPadding:(CGFloat)arg1 verticalPadding:(CGFloat)arg2 ;
+(id)previewMetadataWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
+(id)replyPreviewIconFromFullImage:(id)arg0 ;


@end


#endif