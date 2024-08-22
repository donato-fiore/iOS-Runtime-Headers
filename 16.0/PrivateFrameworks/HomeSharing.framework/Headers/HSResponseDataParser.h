// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HSRESPONSEDATAPARSER_H
#define HSRESPONSEDATAPARSER_H


#import <Foundation/Foundation.h>


@interface HSResponseDataParser : NSObject



+(NSUInteger)_parseItemPropertyCountWithBytes:(char *)arg0 length:(NSUInteger)arg1 ;
+(NSUInteger)parseItemWithBytes:(char *)arg0 length:(NSUInteger)arg1 valuesOut:(struct ? *)arg2 valuesCapacity:(NSUInteger)arg3 ;
+(id)_parseAuthorizedAccountTokenWithBytes:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)_parseBrowseListingWithBytes:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)_parseBulkCloudArtworkInfoResponseWithBytes:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)_parseBulkCloudLyricsInfoResponseWithBytes:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)_parseCloudArtworkInfoResponseWithBytes:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)_parseCloudLyricsInfoResponseWithBytes:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)_parseControlInterfacesResponseWithBytes:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)_parseControlPromptResponseWithBytes:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)_parseDeletedIDListingWithBytes:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)_parseDictionaryCollectionWithBytes:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)_parseEditCommandResponseWithBytes:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)_parseErrorResponseWithBytes:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)_parseItemIDArrayWithBytes:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)_parseItemsResponseWithBytes:(char *)arg0 length:(NSUInteger)arg1 usingHandler:(id)arg2 ;
+(id)_parseListingCollectionWithBytes:(char *)arg0 length:(NSUInteger)arg1 usingHandler:(id)arg2 ;
+(id)_parseListingItemWithBytes:(char *)arg0 length:(unsigned int)arg1 usingHandler:(id)arg2 ;
+(id)_parseLoginResponseWithBytes:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)_parsePlayStatusResponseWithBytes:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)_parseResponseCode:(unsigned int)arg0 bytes:(char *)arg1 length:(NSUInteger)arg2 usingHandler:(id)arg3 ;
+(id)_parseUpdateResponseWithBytes:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)_parseUpdateTypeWithBytes:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)enumerateRawItemsInResponseData:(id)arg0 usingHandler:(id)arg1 ;
+(id)parseErrorInResponseData:(id)arg0 ;
+(id)parseResponseData:(id)arg0 ;
+(void)enumerateDeletedItemsInResponseData:(id)arg0 usingHandler:(id)arg1 ;
+(void)enumerateItemsInResponseData:(id)arg0 usingHandler:(id)arg1 ;
+(void)parseItemWithBytes:(char *)arg0 length:(NSUInteger)arg1 usingHandler:(id)arg2 ;


@end


#endif