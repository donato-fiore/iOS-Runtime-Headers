// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NNMKCONTENTATTRIBUTEDSTRINGHTMLPARSER_H
#define NNMKCONTENTATTRIBUTEDSTRINGHTMLPARSER_H

@class NSDataDetector, NSMutableDictionary, NSLock, NSMutableAttributedString;


#import "NNMKHTMLParser.h"

@interface NNMKContentAttributedStringHTMLParser : NNMKHTMLParser

@property (retain, nonatomic) NSDataDetector *dataDetector; // ivar: _dataDetector
@property (retain, nonatomic) NSMutableDictionary *imageAtachmentsDataByContentId; // ivar: _imageAtachmentsDataByContentId
@property (retain, nonatomic) NSLock *lock; // ivar: _lock
@property (nonatomic) CGFloat maxImageWidth; // ivar: _maxImageWidth
@property (nonatomic) NSUInteger maxLength; // ivar: _maxLength
@property (retain, nonatomic) NSMutableAttributedString *parsedAttributedString; // ivar: _parsedAttributedString
@property (nonatomic) *BOOL partiallyParsed; // ivar: _partiallyParsed


+(id)_scaleAndPrepareImageForClient:(id)arg0 maxWidth:(CGFloat)arg1 screenScale:(CGFloat)arg2 ;
+(id)adjustedImage:(id)arg0 maxWidth:(CGFloat)arg1 screenScale:(CGFloat)arg2 ;
+(id)attachmentAttributedStringWithContentId:(id)arg0 mergingAttributes:(id)arg1 ;
+(id)imageAttachmentAttributedStringWithContentId:(id)arg0 imageSize:(struct CGSize )arg1 mergingAttributes:(id)arg2 ;
+(id)trimAttributedString:(id)arg0 ;
+(struct CGSize )_scaledDownSize:(struct CGSize )arg0 maxWidth:(CGFloat)arg1 ;
-(BOOL)_validateURLsAndHTMLTagsInParsedString:(id)arg0 urlsFound:(*id)arg1 ;
-(BOOL)isElementBlocked:(id)arg0 attributeQueryBlock:(id)arg1 ;
-(BOOL)isElementIgnorable:(id)arg0 ;
-(BOOL)isErrorTypeBlocked:(char *)arg0 ;
-(BOOL)isWebLink:(id)arg0 ;
-(id)_parseHTMLBody:(id)arg0 encoding:(NSUInteger)arg1 maxLength:(NSUInteger)arg2 maxImageWidth:(CGFloat)arg3 partiallyParsed:(*BOOL)arg4 imageAttachmentsLoaded:(*id)arg5 urlsForValidation:(id)arg6 urlsFound:(*id)arg7 ;
-(id)_parsePlainTextBody:(id)arg0 encoding:(NSUInteger)arg1 ;
-(id)parseHTMLBody:(id)arg0 encoding:(NSUInteger)arg1 maxLength:(NSUInteger)arg2 maxImageWidth:(CGFloat)arg3 partiallyParsed:(*BOOL)arg4 imageAttachmentsLoaded:(*id)arg5 urlsForValidation:(id)arg6 ;
-(id)parseHTMLBody:(id)arg0 encoding:(NSUInteger)arg1 maxLength:(NSUInteger)arg2 maxImageWidth:(CGFloat)arg3 partiallyParsed:(*BOOL)arg4 imageAttachmentsLoaded:(*id)arg5 urlsFound:(*id)arg6 ;
-(id)parseHTMLBody:(id)arg0 encoding:(NSUInteger)arg1 maxLength:(NSUInteger)arg2 maxImageWidth:(CGFloat)arg3 partiallyParsed:(*BOOL)arg4 urlsForValidation:(id)arg5 ;
-(id)parseHTMLBody:(id)arg0 encoding:(NSUInteger)arg1 maxLength:(NSUInteger)arg2 maxImageWidth:(CGFloat)arg3 partiallyParsed:(*BOOL)arg4 urlsFound:(*id)arg5 ;
-(id)parseTextBody:(id)arg0 ;
-(void)_addDataDetectionAttributes:(id)arg0 ;
-(void)_appendComponentWithKey:(id)arg0 from:(id)arg1 to:(id)arg2 ;
-(void)appendImageWithSource:(id)arg0 width:(CGFloat)arg1 height:(CGFloat)arg2 stringAttributes:(id)arg3 ;
-(void)appendString:(id)arg0 stringAttributes:(id)arg1 ;


@end


#endif