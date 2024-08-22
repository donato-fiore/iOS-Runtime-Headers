// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UARPSUPERBINARYASSETPAYLOAD_H
#define UARPSUPERBINARYASSETPAYLOAD_H

@class NSString, NSMutableArray, NSURL, NSDictionary, NSMutableData, NSData, NSArray;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "UARPAssetTag.h"
#import "UARPAssetVersion.h"

@interface UARPSuperBinaryAssetPayload : NSObject {
    NSObject<OS_os_log> *_log;
    NSString *_tag;
    UARPAssetTag *_payloadTag;
    UARPAssetVersion *_assetVersion;
    NSMutableArray *_tlvs;
    NSMutableArray *_composeTLVs;
    NSURL *_url;
    NSURL *_superBinaryURL;
    NSString *_friendlyName;
    NSDictionary *_dict;
    BOOL _isWritable;
    unsigned int _blockSize;
    int _compression;
    UARPVersion _uarpVersion;
    UARPPayloadHeader _payloadHeader;
    NSMutableData *_compressionHeaders;
    unsigned int _compressionHeaderIndex;
    NSMutableData *_metaData;
    NSURL *_compressedPayloadURL;
}


@property (readonly) NSUInteger compressionHeaderIndex;
@property (readonly, copy) NSData *compressionHeaders;
@property (readonly) NSUInteger formatVersion; // ivar: _formatVersion
@property (readonly) NSData *metaData;
@property (readonly) BOOL needsCompression;
@property (readonly, copy) NSData *payload; // ivar: _payload
@property (readonly) UARPAssetTag *payloadTag;
@property (readonly) NSArray *tlvs;


-(BOOL)appendCompressedPayloadToFile:(id)arg0 error:(*id)arg1 ;
-(BOOL)appendPayloadToFile:(id)arg0 bytesWritten:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)compressPayloadURLToFileHandle:(id)arg0 error:(*id)arg1 ;
-(BOOL)expandDictionaryWithPayloadsFolder:(id)arg0 metaDataTable:(id)arg1 error:(*id)arg2 ;
-(BOOL)expandPayloadToURL:(id)arg0 payloadFilename:(id)arg1 superbinary:(id)arg2 offset:(NSUInteger)arg3 length:(NSUInteger)arg4 error:(*id)arg5 ;
-(BOOL)expandPayloadToURL:(id)arg0 superbinary:(id)arg1 offset:(NSUInteger)arg2 length:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)parseFromPlistPayloadMetaDataTLVs:(id)arg0 payloadsURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)parseFromPlistVersion:(*id)arg0 ;
-(BOOL)prepareUarpVersion:(struct UARPVersion *)arg0 ;
-(BOOL)updateFormatVersion:(NSUInteger)arg0 ;
-(BOOL)writePayloadData:(id)arg0 offset:(NSUInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)preparePackedTag;
-(NSUInteger)preparedDataLength;
-(id)compressPayloadChunk:(id)arg0 offset:(unsigned int)arg1 error:(*id)arg2 ;
-(id)description;
-(id)hashPayloadWithAlgorithm:(int)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithPayloadHeader:(struct UARPPayloadHeader *)arg0 ;
-(id)initWithPayloadTag:(id)arg0 assetVersion:(id)arg1 ;
-(id)initWithPayloadTag:(id)arg0 assetVersion:(id)arg1 writable:(BOOL)arg2 ;
-(id)initWithPayloadTag:(id)arg0 majorVersion:(NSUInteger)arg1 minorVersion:(NSUInteger)arg2 releaseVersion:(NSUInteger)arg3 buildVersion:(NSUInteger)arg4 ;
-(id)initWithTag:(id)arg0 majorVersion:(id)arg1 minorVersion:(id)arg2 releaseVersion:(id)arg3 buildVersion:(id)arg4 ;
-(id)prepareData;
-(id)prepareMetaData;
-(struct _NSRange )rangeMetadata;
-(struct _NSRange )rangePayload;
-(void)addMetaDataTLV:(id)arg0 ;
-(void)addMetaDataTLVs:(id)arg0 ;
-(void)setSuperBinaryURL:(id)arg0 ;


@end


#endif