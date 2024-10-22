// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSTRING_H
#define NSSTRING_H

@class NSArray;
@protocol NSItemProviderReading, NSItemProviderWriting, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSAttributedString.h"
#import "NSString.h"

@interface NSString : NSObject <NSItemProviderReading, NSItemProviderWriting, NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic) NSAttributedString *__baseAttributedString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger length;
@property (readonly, copy) NSString *stringByRemovingPercentEncoding;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;


+(*NSUInteger)availableStringEncodings;
+(BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+(BOOL)supportsSecureCoding;
+(NSUInteger)defaultCStringEncoding;
+(NSUInteger)stringEncodingForData:(id)arg0 encodingOptions:(id)arg1 convertedString:(*id)arg2 usedLossyConversion:(*BOOL)arg3 ;
+(id)_newStringFromUTF16InternalData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)_newZStringWithCharacters:(*unsigned short)arg0 length:(NSUInteger)arg1 ;
+(id)_newZStringWithString:(id)arg0 ;
+(id)_newZStringWithUTF8String:(char *)arg0 ;
+(id)_stringWithFormat:(id)arg0 locale:(id)arg1 options:(id)arg2 arguments:(char *)arg3 ;
+(id)_web_stringRepresentationForBytes:(NSInteger)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)localizedNameOfStringEncoding:(NSUInteger)arg0 ;
+(id)localizedStringWithFormat:(id)arg0 ;
+(id)localizedStringWithValidatedFormat:(id)arg0 validFormatSpecifiers:(id)arg1 error:(*id)arg2 ;
+(id)objectWithItemProviderData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)pathWithComponents:(id)arg0 ;
+(id)readableTypeIdentifiersForItemProvider;
+(id)string;
+(id)stringWithBytes:(*void)arg0 length:(NSUInteger)arg1 encoding:(NSUInteger)arg2 ;
+(id)stringWithCString:(char *)arg0 ;
+(id)stringWithCString:(char *)arg0 encoding:(NSUInteger)arg1 ;
+(id)stringWithCString:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)stringWithCharacters:(*unsigned short)arg0 length:(NSUInteger)arg1 ;
+(id)stringWithContentsOfFile:(id)arg0 ;
+(id)stringWithContentsOfFile:(id)arg0 encoding:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)stringWithContentsOfFile:(id)arg0 usedEncoding:(*NSUInteger)arg1 error:(*id)arg2 ;
+(id)stringWithContentsOfURL:(id)arg0 ;
+(id)stringWithContentsOfURL:(id)arg0 encoding:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)stringWithContentsOfURL:(id)arg0 usedEncoding:(*NSUInteger)arg1 error:(*id)arg2 ;
+(id)stringWithFormat:(id)arg0 ;
+(id)stringWithFormat:(id)arg0 locale:(id)arg1 ;
+(id)stringWithString:(id)arg0 ;
+(id)stringWithUTF8String:(char *)arg0 ;
+(id)stringWithValidatedFormat:(id)arg0 validFormatSpecifiers:(id)arg1 error:(*id)arg2 ;
+(void)initialize;
-(*unsigned short)_fastCharacterContents;
-(BOOL)_allowsDirectEncoding;
-(BOOL)_getCString:(char *)arg0 maxLength:(NSUInteger)arg1 encoding:(unsigned int)arg2 ;
-(BOOL)_isCString;
-(BOOL)_web_domainMatches:(id)arg0 ;
-(BOOL)_web_hasCaseInsensitivePrefix:(id)arg0 ;
-(BOOL)_web_hasCountryCodeTLD;
-(BOOL)_web_isCaseInsensitiveEqualToString:(id)arg0 ;
-(BOOL)_web_isFileURL;
-(BOOL)_web_isJavaScriptURL;
-(BOOL)_web_looksLikeAbsoluteURL;
-(BOOL)_web_looksLikeIPAddress;
-(BOOL)boolValue;
-(BOOL)canBeConvertedToEncoding:(NSUInteger)arg0 ;
-(BOOL)containsString:(id)arg0 ;
-(BOOL)getBytes:(*void)arg0 maxLength:(NSUInteger)arg1 usedLength:(*NSUInteger)arg2 encoding:(NSUInteger)arg3 options:(NSUInteger)arg4 range:(struct _NSRange )arg5 remainingRange:(struct _NSRange *)arg6 ;
-(BOOL)getBytes:(char *)arg0 maxLength:(NSUInteger)arg1 filledLength:(*NSUInteger)arg2 encoding:(NSUInteger)arg3 allowLossyConversion:(BOOL)arg4 range:(struct _NSRange )arg5 remainingRange:(struct _NSRange *)arg6 ;
-(BOOL)getCString:(char *)arg0 maxLength:(NSUInteger)arg1 encoding:(NSUInteger)arg2 ;
-(BOOL)getExternalRepresentation:(*id)arg0 extendedAttributes:(*id)arg1 forWritingToURLOrPath:(id)arg2 usingEncoding:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)getFileSystemRepresentation:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(BOOL)hasPrefix:(id)arg0 ;
-(BOOL)hasSuffix:(id)arg0 ;
-(BOOL)isAbsolutePath;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToString:(id)arg0 ;
-(BOOL)isNSString__;
-(BOOL)localizedCaseInsensitiveContainsString:(id)arg0 ;
-(BOOL)localizedHasPrefix:(id)arg0 ;
-(BOOL)localizedHasSuffix:(id)arg0 ;
-(BOOL)localizedStandardContainsString:(id)arg0 ;
-(BOOL)writeToFile:(id)arg0 atomically:(BOOL)arg1 ;
-(BOOL)writeToFile:(id)arg0 atomically:(BOOL)arg1 encoding:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)writeToURL:(id)arg0 atomically:(BOOL)arg1 ;
-(BOOL)writeToURL:(id)arg0 atomically:(BOOL)arg1 encoding:(NSUInteger)arg2 error:(*id)arg3 ;
-(CGFloat)doubleValue;
-(Class)classForCoder;
-(NSInteger)_web_countOfString:(id)arg0 ;
-(NSInteger)caseInsensitiveCompare:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)compare:(id)arg0 options:(NSUInteger)arg1 ;
-(NSInteger)compare:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 ;
-(NSInteger)compare:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 locale:(id)arg3 ;
-(NSInteger)integerValue;
-(NSInteger)localizedCaseInsensitiveCompare:(id)arg0 ;
-(NSInteger)localizedCompare:(id)arg0 ;
-(NSInteger)localizedStandardCompare:(id)arg0 ;
-(NSInteger)longLongValue;
-(NSUInteger)_cfTypeID;
-(NSUInteger)cStringLength;
-(NSUInteger)completePathIntoString:(*id)arg0 caseSensitive:(BOOL)arg1 matchesIntoArray:(*id)arg2 filterTypes:(id)arg3 ;
-(NSUInteger)fastestEncoding;
-(NSUInteger)lengthOfBytesUsingEncoding:(NSUInteger)arg0 ;
-(NSUInteger)maximumLengthOfBytesUsingEncoding:(NSUInteger)arg0 ;
-(NSUInteger)smallestEncoding;
-(char *)UTF8String;
-(char *)_fastCStringContents:(BOOL)arg0 ;
-(char *)cString;
-(char *)cStringUsingEncoding:(NSUInteger)arg0 ;
-(char *)fileSystemRepresentation;
-(char *)lossyCString;
-(float)floatValue;
-(id)__escapeString5991;
-(id)_copyFormatStringWithConfiguration:(id)arg0 ;
-(id)_createSubstringWithRange:(struct _NSRange )arg0 ;
-(id)_initWithBytesOfUnknownEncoding:(char *)arg0 length:(NSUInteger)arg1 copy:(BOOL)arg2 usedEncoding:(*NSUInteger)arg3 ;
-(id)_initWithDataOfUnknownEncoding:(id)arg0 ;
-(id)_initWithFormat:(id)arg0 locale:(id)arg1 options:(id)arg2 ;
-(id)_initWithFormat:(id)arg0 locale:(id)arg1 options:(id)arg2 arguments:(char *)arg3 ;
-(id)_initWithFormat:(id)arg0 options:(id)arg1 ;
-(id)_initWithFormat:(id)arg0 options:(id)arg1 arguments:(char *)arg2 ;
-(id)_initWithValidatedFormat:(id)arg0 validFormatSpecifiers:(id)arg1 locale:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
-(id)_initWithValidatedFormat:(id)arg0 validFormatSpecifiers:(id)arg1 locale:(id)arg2 options:(id)arg3 error:(*id)arg4 arguments:(char *)arg5 ;
-(id)_initWithValidatedFormat:(id)arg0 validFormatSpecifiers:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)_initWithValidatedFormat:(id)arg0 validFormatSpecifiers:(id)arg1 options:(id)arg2 error:(*id)arg3 arguments:(char *)arg4 ;
-(id)_newSubstringWithRange:(struct _NSRange )arg0 zone:(struct _NSZone *)arg1 ;
-(id)_stringByReplacingOccurrencesOfRegularExpressionPattern:(id)arg0 withTemplate:(id)arg1 options:(NSUInteger)arg2 range:(struct _NSRange )arg3 ;
-(id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)arg0 ;
-(id)_stringByStandardizingPathUsingCache:(BOOL)arg0 ;
-(id)_stringRepresentation;
-(id)_web_HTTPStyleLanguageCode;
-(id)_web_HTTPStyleLanguageCodeWithoutRegion;
-(id)_web_URLFragment;
-(id)_web_characterSetFromContentTypeHeader_nowarn;
-(id)_web_domainFromHost;
-(id)_web_fileNameFromContentDispositionHeader_nowarn;
-(id)_web_filenameByFixingIllegalCharacters;
-(id)_web_fixedCarbonPOSIXPath;
-(id)_web_mimeTypeFromContentTypeHeader_nowarn;
-(id)_web_parseAsKeyValuePairHandleQuotes_nowarn:(BOOL)arg0 ;
-(id)_web_parseAsKeyValuePair_nowarn;
-(id)_web_splitAtNonDateCommas_nowarn;
-(id)_web_stringByCollapsingNonPrintingCharacters;
-(id)_web_stringByExpandingTildeInPath;
-(id)_web_stringByReplacingValidPercentEscapes_nowarn;
-(id)_web_stringByTrimmingWhitespace;
-(id)_widthVariants;
-(id)capitalizedString;
-(id)capitalizedStringWithLocale:(id)arg0 ;
-(id)commonPrefixWithString:(id)arg0 options:(NSUInteger)arg1 ;
-(id)componentsSeparatedByCharactersInSet:(id)arg0 ;
-(id)componentsSeparatedByString:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataUsingEncoding:(NSUInteger)arg0 ;
-(id)dataUsingEncoding:(NSUInteger)arg0 allowLossyConversion:(BOOL)arg1 ;
-(id)decomposedStringWithCanonicalMapping;
-(id)decomposedStringWithCompatibilityMapping;
-(id)displayableString;
-(id)formatConfiguration;
-(id)init;
-(id)initWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 encoding:(NSUInteger)arg2 deallocator:(id)arg3 ;
-(id)initWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 encoding:(NSUInteger)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)initWithCString:(char *)arg0 ;
-(id)initWithCString:(char *)arg0 encoding:(NSUInteger)arg1 ;
-(id)initWithCString:(char *)arg0 length:(NSUInteger)arg1 ;
-(id)initWithCStringNoCopy:(char *)arg0 length:(NSUInteger)arg1 freeWhenDone:(BOOL)arg2 ;
-(id)initWithCharacters:(*unsigned short)arg0 length:(NSUInteger)arg1 ;
-(id)initWithCharactersNoCopy:(*unsigned short)arg0 length:(NSUInteger)arg1 deallocator:(id)arg2 ;
-(id)initWithCharactersNoCopy:(*unsigned short)arg0 length:(NSUInteger)arg1 freeWhenDone:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentsOfFile:(id)arg0 ;
-(id)initWithContentsOfFile:(id)arg0 encoding:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithContentsOfFile:(id)arg0 usedEncoding:(*NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithContentsOfURL:(id)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 encoding:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithContentsOfURL:(id)arg0 usedEncoding:(*NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithData:(id)arg0 encoding:(NSUInteger)arg1 ;
-(id)initWithData:(id)arg0 usedEncoding:(*NSUInteger)arg1 ;
-(id)initWithFormat:(id)arg0 ;
-(id)initWithFormat:(id)arg0 arguments:(char *)arg1 ;
-(id)initWithFormat:(id)arg0 locale:(id)arg1 ;
-(id)initWithFormat:(id)arg0 locale:(id)arg1 arguments:(char *)arg2 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithUTF8String:(char *)arg0 ;
-(id)initWithValidatedFormat:(id)arg0 validFormatSpecifiers:(id)arg1 arguments:(char *)arg2 error:(*id)arg3 ;
-(id)initWithValidatedFormat:(id)arg0 validFormatSpecifiers:(id)arg1 error:(*id)arg2 ;
-(id)initWithValidatedFormat:(id)arg0 validFormatSpecifiers:(id)arg1 locale:(id)arg2 arguments:(char *)arg3 error:(*id)arg4 ;
-(id)initWithValidatedFormat:(id)arg0 validFormatSpecifiers:(id)arg1 locale:(id)arg2 error:(*id)arg3 ;
-(id)lastPathComponent;
-(id)linguisticTagsInRange:(struct _NSRange )arg0 scheme:(id)arg1 options:(NSUInteger)arg2 orthography:(id)arg3 tokenRanges:(*id)arg4 ;
-(id)loadDataWithTypeIdentifier:(id)arg0 forItemProviderCompletionHandler:(id)arg1 ;
-(id)localizedCapitalizedString;
-(id)localizedLowercaseString;
-(id)localizedUppercaseString;
-(id)lowercaseString;
-(id)lowercaseStringWithLocale:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)pathComponents;
-(id)pathExtension;
-(id)precomposedStringWithCanonicalMapping;
-(id)precomposedStringWithCompatibilityMapping;
-(id)propertyList;
-(id)propertyListFromStringsFileFormat;
-(id)quotedStringRepresentation;
-(id)replacementObjectForPortCoder:(id)arg0 ;
-(id)standardizedURLPath;
-(id)stringByAbbreviatingWithTildeInPath;
-(id)stringByAddingPercentEncodingWithAllowedCharacters:(id)arg0 ;
-(id)stringByAddingPercentEscapes;
-(id)stringByAddingPercentEscapesUsingEncoding:(NSUInteger)arg0 ;
-(id)stringByAppendingFormat:(id)arg0 ;
-(id)stringByAppendingPathComponent:(id)arg0 ;
-(id)stringByAppendingPathExtension:(id)arg0 ;
-(id)stringByAppendingString:(id)arg0 ;
-(id)stringByApplyingTransform:(id)arg0 reverse:(BOOL)arg1 ;
-(id)stringByConvertingPathToURL;
-(id)stringByConvertingURLToPath;
-(id)stringByDeletingLastPathComponent;
-(id)stringByDeletingPathExtension;
-(id)stringByExpandingTildeInPath;
-(id)stringByFoldingWithOptions:(NSUInteger)arg0 locale:(id)arg1 ;
-(id)stringByPaddingToLength:(NSUInteger)arg0 withString:(id)arg1 startingAtIndex:(NSUInteger)arg2 ;
-(id)stringByRemovingPercentEscapes;
-(id)stringByReplacingCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;
-(id)stringByReplacingOccurrencesOfString:(id)arg0 withString:(id)arg1 ;
-(id)stringByReplacingOccurrencesOfString:(id)arg0 withString:(id)arg1 options:(NSUInteger)arg2 range:(struct _NSRange )arg3 ;
-(id)stringByReplacingPercentEscapesUsingEncoding:(NSUInteger)arg0 ;
-(id)stringByResolvingSymlinksInPath;
-(id)stringByStandardizingPath;
-(id)stringByTrimmingCharactersInSet:(id)arg0 ;
-(id)stringsByAppendingPaths:(id)arg0 ;
-(id)substringFromIndex:(NSUInteger)arg0 ;
-(id)substringToIndex:(NSUInteger)arg0 ;
-(id)substringWithRange:(struct _NSRange )arg0 ;
-(id)uppercaseString;
-(id)uppercaseStringWithLocale:(id)arg0 ;
-(id)variantFittingPresentationWidth:(NSInteger)arg0 ;
-(int)intValue;
-(struct ? )decimalValue;
-(struct _NSRange )_rangeOfRegularExpressionPattern:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 locale:(id)arg3 ;
-(struct _NSRange )_web_rangeOfURLHost;
-(struct _NSRange )_web_rangeOfURLResourceSpecifier_nowarn;
-(struct _NSRange )_web_rangeOfURLScheme_nowarn;
-(struct _NSRange )_web_rangeOfURLUserPasswordHostPort;
-(struct _NSRange )lineRangeForRange:(struct _NSRange )arg0 ;
-(struct _NSRange )localizedStandardRangeOfString:(id)arg0 ;
-(struct _NSRange )paragraphRangeForRange:(struct _NSRange )arg0 ;
-(struct _NSRange )rangeOfCharacterFromSet:(id)arg0 ;
-(struct _NSRange )rangeOfCharacterFromSet:(id)arg0 options:(NSUInteger)arg1 ;
-(struct _NSRange )rangeOfCharacterFromSet:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 ;
-(struct _NSRange )rangeOfComposedCharacterSequenceAtIndex:(NSUInteger)arg0 ;
-(struct _NSRange )rangeOfComposedCharacterSequencesForRange:(struct _NSRange )arg0 ;
-(struct _NSRange )rangeOfString:(id)arg0 ;
-(struct _NSRange )rangeOfString:(id)arg0 options:(NSUInteger)arg1 ;
-(struct _NSRange )rangeOfString:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 ;
-(struct _NSRange )rangeOfString:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 locale:(id)arg3 ;
-(struct _NSRange )significantText;
-(unsigned char)_encodingCantBeStoredInEightBitCFString;
-(unsigned int)_fastestEncodingInCFStringEncoding;
-(unsigned int)_smallestEncodingInCFStringEncoding;
-(unsigned int)_web_extractFourCharCode;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)_flushRegularExpressionCaches;
-(void)_getBlockStart:(*NSUInteger)arg0 end:(*NSUInteger)arg1 contentsEnd:(*NSUInteger)arg2 forRange:(struct _NSRange )arg3 stopAtLineSeparators:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateLinesUsingBlock:(id)arg0 ;
-(void)enumerateLinguisticTagsInRange:(struct _NSRange )arg0 scheme:(id)arg1 options:(NSUInteger)arg2 orthography:(id)arg3 usingBlock:(id)arg4 ;
-(void)enumerateSubstringsInRange:(struct _NSRange )arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)getCString:(char *)arg0 ;
-(void)getCString:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(void)getCString:(char *)arg0 maxLength:(NSUInteger)arg1 range:(struct _NSRange )arg2 remainingRange:(struct _NSRange *)arg3 ;
-(void)getCharacters:(*unsigned short)arg0 ;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;
-(void)getLineStart:(*NSUInteger)arg0 end:(*NSUInteger)arg1 contentsEnd:(*NSUInteger)arg2 forRange:(struct _NSRange )arg3 ;
-(void)getParagraphStart:(*NSUInteger)arg0 end:(*NSUInteger)arg1 contentsEnd:(*NSUInteger)arg2 forRange:(struct _NSRange )arg3 ;


@end


#endif