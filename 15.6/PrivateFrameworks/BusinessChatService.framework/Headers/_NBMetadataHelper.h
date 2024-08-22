// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NBMETADATAHELPER_H
#define _NBMETADATAHELPER_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface _NBMetadataHelper : NSObject

@property (retain, nonatomic) NSCache *metadataCache; // ivar: _metadataCache


+(BOOL)hasValue:(id)arg0 ;
+(id)CCode2CNMap;
+(id)CN2CCodeMap;
+(id)countryCodeFromRegionCode:(id)arg0 ;
+(id)jsonObjectFromZippedDataWithBytes:(char *)arg0 compressedLength:(NSUInteger)arg1 expandedLength:(NSUInteger)arg2 ;
+(id)phoneNumberDataMap;
+(id)regionCodeFromCountryCode:(id)arg0 ;
-(id)getAllMetadata;
-(id)getMetadataForNonGeographicalRegion:(id)arg0 ;
-(id)getMetadataForRegion:(id)arg0 ;
-(id)init;


@end


#endif