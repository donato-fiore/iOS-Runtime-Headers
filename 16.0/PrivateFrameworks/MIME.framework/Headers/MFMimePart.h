// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMIMEPART_H
#define MFMIMEPART_H

@class NSString, NSMutableDictionary, NSURL, NSData, NSArray;

#import <Foundation/Foundation.h>

#import "MFWeakReferenceHolder.h"
#import "MFMimePart.h"
#import "MFPartialNetworkDataConsumer.h"

@interface MFMimePart : NSObject {
    NSString *_type;
    NSString *_subtype;
    NSMutableDictionary *_bodyParameters;
    NSString *_contentTransferEncoding;
    NSMutableDictionary *_otherIvars;
    _NSRange _range;
    MFWeakReferenceHolder *_parent;
    MFWeakReferenceHolder *_body;
    MFMimePart *_nextPart;
    NSURL *_partURL;
    NSURL *_parentPartURL;
    MFPartialNetworkDataConsumer *_partialDataConsumer;
    NSData *_fullData;
    MFWeakReferenceHolder *_decodedData;
}


@property (copy, nonatomic) NSString *contentDescription;
@property (copy, nonatomic) NSString *contentID;
@property (copy, nonatomic) NSString *contentLocation;
@property (copy, nonatomic) NSString *contentTransferEncoding;
@property (copy, nonatomic) NSString *disposition;
@property (copy, nonatomic) NSArray *languages;
@property (copy, nonatomic) NSString *subtype;
@property (copy, nonatomic) NSString *type;


+(BOOL)isRecognizedClassForContent:(id)arg0 ;
+(BOOL)parseContentTypeHeader:(id)arg0 type:(*id)arg1 subtype:(*id)arg2 ;
+(BOOL)parseContentTypeHeader:(id)arg0 type:(*id)arg1 subtype:(*id)arg2 info:(*id)arg3 ;
+(Class)attachmentClass;
+(void)initialize;
-(BOOL)_hasCompleteBodyDataToOffset:(NSUInteger)arg0 ;
-(BOOL)_shouldContinueDecodingProcess;
-(BOOL)hasContentType:(id)arg0 subtype:(id)arg1 ;
-(BOOL)hasContents;
-(BOOL)hasValidMultipartSignedContentType;
-(BOOL)isAttachment;
-(BOOL)isGenerated;
-(BOOL)isHTML;
-(BOOL)isReadableText;
-(BOOL)isRich;
-(BOOL)parseIMAPPropertyList:(id)arg0 ;
-(BOOL)parseMimeBody;
-(BOOL)parseMimeBodyDownloadIfNecessary:(BOOL)arg0 ;
-(BOOL)parseMimeBodyFromHeaderData:(id)arg0 bodyData:(id)arg1 isPartial:(BOOL)arg2 ;
-(BOOL)shouldConsiderInlineOverridingExchangeServer;
-(BOOL)usesKnownSignatureProtocol;
-(NSInteger)numberOfAlternatives;
-(NSUInteger)totalTextSize;
-(SEL)_selectorForCString:(char *)arg0 ;
-(id)_fullMimeTypeEvenInsideAppleDouble;
-(id)_partThatIsAttachment;
-(id)alternativeAtIndex:(NSInteger)arg0 ;
-(id)attachmentFilename;
-(id)attachmentURLs;
-(id)attachments;
-(id)bodyData;
-(id)bodyDataForcingDownload:(BOOL)arg0 ;
-(id)bodyDataToOffset:(NSUInteger)arg0 resultOffset:(*NSUInteger)arg1 ;
-(id)bodyDataToOffset:(NSUInteger)arg0 resultOffset:(*NSUInteger)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(id)bodyParameterForKey:(id)arg0 ;
-(id)bodyParameterKeys;
-(id)childPartWithNumber:(id)arg0 ;
-(id)chosenAlternativePart;
-(id)contentToOffset:(NSUInteger)arg0 resultOffset:(*NSUInteger)arg1 asHTML:(BOOL)arg2 ;
-(id)contentToOffset:(NSUInteger)arg0 resultOffset:(*NSUInteger)arg1 downloadIfNecessary:(BOOL)arg2 asHTML:(BOOL)arg3 ;
-(id)contentToOffset:(NSUInteger)arg0 resultOffset:(*NSUInteger)arg1 downloadIfNecessary:(BOOL)arg2 asHTML:(BOOL)arg3 isComplete:(*BOOL)arg4 ;
-(id)contentsForTextSystem;
-(id)contentsForTextSystemForcingDownload:(BOOL)arg0 ;
-(id)contentsForTextSystemToOffset:(NSUInteger)arg0 resultOffset:(*NSUInteger)arg1 ;
-(id)contentsForTextSystemToOffset:(NSUInteger)arg0 resultOffset:(*NSUInteger)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(id)contentsForTextSystemToOffset:(NSUInteger)arg0 resultOffset:(*NSUInteger)arg1 downloadIfNecessary:(BOOL)arg2 asHTML:(BOOL)arg3 ;
-(id)contentsForTextSystemToOffset:(NSUInteger)arg0 resultOffset:(*NSUInteger)arg1 downloadIfNecessary:(BOOL)arg2 asHTML:(BOOL)arg3 isComplete:(*BOOL)arg4 ;
-(id)copyBodyDataToOffset:(NSUInteger)arg0 resultOffset:(*NSUInteger)arg1 ;
-(id)copyBodyDataToOffset:(NSUInteger)arg0 resultOffset:(*NSUInteger)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(id)copyBodyDataToOffset:(NSUInteger)arg0 resultOffset:(*NSUInteger)arg1 downloadIfNecessary:(BOOL)arg2 isComplete:(*BOOL)arg3 ;
-(id)decodeApplicationOctet_stream;
-(id)decodeApplicationZip;
-(id)decodeMultipart;
-(id)decodeMultipartAlternative;
-(id)decodeMultipartRelated;
-(id)decodeText;
-(id)decodedDataForData:(id)arg0 ;
-(id)decryptedMessageBodyIsEncrypted:(*BOOL)arg0 isSigned:(*BOOL)arg1 ;
-(id)description;
-(id)dispositionParameterForKey:(id)arg0 ;
-(id)fileWrapper;
-(id)fileWrapperForDecodedObject:(id)arg0 withFileData:(*id)arg1 ;
-(id)fileWrapperForcingDownload:(BOOL)arg0 ;
-(id)firstChildPart;
-(id)init;
-(id)mimeBody;
-(id)nextSiblingPart;
-(id)parentPart;
-(id)partNumber;
-(id)partURL;
-(id)preservedHeaderValueForKey:(id)arg0 ;
-(id)rfc822DecodedMessageBody;
-(id)signedData;
-(id)startPart;
-(id)storeData:(id)arg0 inMessage:(id)arg1 isComplete:(BOOL)arg2 ;
-(id)subpartAtIndex:(NSInteger)arg0 ;
-(id)subparts;
-(id)textHtmlPart;
-(struct _NSRange )range;
-(unsigned int)approximateRawSize;
-(unsigned int)numberOfAttachments;
-(unsigned int)textEncoding;
-(void)_clearNextAndSibling;
-(void)_clearParent;
-(void)_contents:(*id)arg0 toOffset:(NSUInteger)arg1 resultOffset:(*NSUInteger)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(*BOOL)arg5 ;
-(void)_ensureBodyDataToOffset:(NSUInteger)arg0 resultOffset:(*NSUInteger)arg1 downloadIfNecessary:(BOOL)arg2 isComplete:(*BOOL)arg3 decoded:(*id)arg4 ;
-(void)_fixupBodyParametersRFC2231Values;
-(void)_fixupDispositionParametersRFC2231Values;
-(void)_setDecryptedMessageBody:(id)arg0 isEncrypted:(BOOL)arg1 isSigned:(BOOL)arg2 ;
-(void)_setObjectInOtherIvars:(id)arg0 forKey:(id)arg1 ;
-(void)_setRFC822DecodedMessageBody:(id)arg0 ;
-(void)addSubpart:(id)arg0 ;
-(void)clearCachedDescryptedMessageBody;
-(void)configureFileWrapper:(id)arg0 ;
-(void)dealloc;
-(void)decodeIfNecessary;
-(void)download;
-(void)getNumberOfAttachments:(*unsigned int)arg0 isSigned:(*BOOL)arg1 isEncrypted:(*BOOL)arg2 ;
-(void)setBodyParameter:(id)arg0 forKey:(id)arg1 ;
-(void)setIsGenerated:(BOOL)arg0 ;
-(void)setMimeBody:(id)arg0 ;
-(void)setRange:(struct _NSRange )arg0 ;
-(void)setSubparts:(id)arg0 ;


@end


#endif