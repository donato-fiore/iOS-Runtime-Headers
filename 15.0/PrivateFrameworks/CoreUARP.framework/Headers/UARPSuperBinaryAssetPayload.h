// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UARPSUPERBINARYASSETPAYLOAD_H
#define UARPSUPERBINARYASSETPAYLOAD_H

@class NSString, NSMutableArray, NSURL, NSDictionary, NSMutableData, NSData, NSArray;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "UARPAssetTag.h"

@interface UARPSuperBinaryAssetPayload : NSObject {
    NSObject<OS_os_log> *_log;
    NSString *_tag;
    UARPAssetTag *_payloadTag;
    NSUInteger _majorVersion;
    NSUInteger _minorVersion;
    NSUInteger _releaseVersion;
    NSUInteger _buildVersion;
    NSMutableArray *_tlvs;
    NSURL *_url;
    NSURL *_superBinaryURL;
    NSString *_friendlyName;
    NSDictionary *_dict;
    unsigned int _blockSize;
    int _compression;
    UARPVersion _uarpVersion;
    UARPPayloadHeader _payloadHeader;
    NSMutableData *_compressionHeaders;
    unsigned int _compressionHeaderIndex;
}


@property (readonly) NSUInteger compressionHeaderIndex;
@property (readonly, copy) NSData *compressionHeaders;
@property (readonly) BOOL needsCompression;
@property (readonly, copy) NSData *payload; // ivar: _payload
@property (readonly) UARPAssetTag *payloadTag;
@property (readonly) NSArray *tlvs;


-(BOOL)appendPayloadToFile:(id)arg0 bytesWritten:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)expandDictionaryWithPayloadsFolder:(id)arg0 metaDataTable:(id)arg1 error:(*id)arg2 ;
-(BOOL)expandPayloadToURL:(id)arg0 payloadFilename:(id)arg1 superbinary:(id)arg2 offset:(NSUInteger)arg3 length:(NSUInteger)arg4 error:(*id)arg5 ;
-(BOOL)expandPayloadToURL:(id)arg0 superbinary:(id)arg1 offset:(NSUInteger)arg2 length:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)parseFromPlistPayloadMetaDataTLVs:(id)arg0 payloadsURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)parseFromPlistVersion:(*id)arg0 ;
-(BOOL)prepareUarpVersion:(struct UARPVersion *)arg0 ;
-(NSUInteger)preparePackedTag;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithPayloadHeader:(struct UARPPayloadHeader *)arg0 ;
-(id)initWithPayloadTag:(id)arg0 majorVersion:(NSUInteger)arg1 minorVersion:(NSUInteger)arg2 releaseVersion:(NSUInteger)arg3 buildVersion:(NSUInteger)arg4 ;
-(id)initWithTag:(id)arg0 majorVersion:(id)arg1 minorVersion:(id)arg2 releaseVersion:(id)arg3 buildVersion:(id)arg4 ;
-(id)prepareMetaData;
-(struct _NSRange )rangeMetadata;
-(struct _NSRange )rangePayload;
-(void)addMetaDataTLV:(id)arg0 ;
-(void)addMetaDataTLVs:(id)arg0 ;
-(void)setSuperBinaryURL:(id)arg0 ;


@end


#endif