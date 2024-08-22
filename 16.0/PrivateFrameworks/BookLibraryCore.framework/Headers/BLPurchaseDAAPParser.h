// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLPURCHASEDAAPPARSER_H
#define BLPURCHASEDAAPPARSER_H


#import <Foundation/Foundation.h>


@interface BLPurchaseDAAPParser : NSObject



+(id)decodeData:(id)arg0 ;
+(id)decodeHexString:(id)arg0 ;
+(id)sharedInstance;
+(id)typeForDRCPValueType:(NSInteger)arg0 ;
-(NSUInteger)SwapInt64BigToHost:(char *)arg0 size:(NSInteger)arg1 ;
-(id)parseBookletItem:(char *)arg0 count:(NSInteger)arg1 ;
-(id)parseBookletListing:(char *)arg0 count:(NSInteger)arg1 ;
-(id)parseBrowseResults:(char *)arg0 count:(NSInteger)arg1 ;
-(id)parseContentCodes:(char *)arg0 count:(NSInteger)arg1 ;
-(id)parseControlPromptCollection:(char *)arg0 count:(NSInteger)arg1 ;
-(id)parseControlPromptResponse:(char *)arg0 count:(NSInteger)arg1 ;
-(id)parseDACPPropertyResponse:(char *)arg0 count:(NSInteger)arg1 ;
-(id)parseDeletedIDsList:(char *)arg0 count:(NSInteger)arg1 ;
-(id)parseError:(char *)arg0 count:(NSInteger)arg1 ;
-(id)parseGetSpeakersResponse:(char *)arg0 count:(NSInteger)arg1 ;
-(id)parseListingCollection:(char *)arg0 count:(NSInteger)arg1 capacity:(int)arg2 ;
-(id)parseListingHeader:(char *)arg0 count:(NSInteger)arg1 ;
-(id)parseListingItem:(char *)arg0 count:(NSInteger)arg1 ;
-(id)parseLogin:(char *)arg0 count:(NSInteger)arg1 ;
-(id)parseMACAddressListing:(char *)arg0 count:(NSInteger)arg1 ;
-(id)parseServerInfo:(char *)arg0 count:(NSInteger)arg1 ;
-(id)parseUTF8String:(char *)arg0 length:(NSInteger)arg1 ;
-(id)parseUnicodeCharacter:(char *)arg0 count:(NSInteger)arg1 ;
-(id)processFlavor:(char *)arg0 size:(NSInteger)arg1 ;
-(id)processFlavors:(char *)arg0 size:(NSInteger)arg1 ;
-(id)processResponseCode:(unsigned int)arg0 bytes:(char *)arg1 count:(NSInteger)arg2 ;
-(id)processXMLContent:(char *)arg0 count:(NSInteger)arg1 ;
-(void)parseDict:(char *)arg0 size:(NSInteger)arg1 intoDict:(id)arg2 ;
-(void)setBool:(char *)arg0 size:(NSInteger)arg1 inDict:(id)arg2 forKey:(id)arg3 ;
-(void)setDate:(char *)arg0 size:(NSInteger)arg1 inDict:(id)arg2 forKey:(id)arg3 ;
-(void)setFloat32:(char *)arg0 size:(NSInteger)arg1 inDict:(id)arg2 forKey:(id)arg3 ;
-(void)setSInt16:(char *)arg0 size:(NSInteger)arg1 inDict:(id)arg2 forKey:(id)arg3 ;
-(void)setSInt8:(char *)arg0 size:(NSInteger)arg1 inDict:(id)arg2 forKey:(id)arg3 ;
-(void)setString:(char *)arg0 size:(NSInteger)arg1 inDict:(id)arg2 forKey:(id)arg3 ;
-(void)setUInt16:(char *)arg0 size:(NSInteger)arg1 inDict:(id)arg2 forKey:(id)arg3 ;
-(void)setUInt32:(char *)arg0 size:(NSInteger)arg1 inDict:(id)arg2 forKey:(id)arg3 ;
-(void)setUInt64:(char *)arg0 size:(NSInteger)arg1 inDict:(id)arg2 forKey:(id)arg3 ;
-(void)setUInt8:(char *)arg0 size:(NSInteger)arg1 inDict:(id)arg2 forKey:(id)arg3 ;
-(void)unknownCode:(unsigned int)arg0 bytes:(char *)arg1 size:(NSInteger)arg2 ;


@end


#endif