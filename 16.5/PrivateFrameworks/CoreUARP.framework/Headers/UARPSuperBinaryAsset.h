// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UARPSUPERBINARYASSET_H
#define UARPSUPERBINARYASSET_H

@class NSMutableArray, NSURL, NSDictionary, NSMutableData, NSArray;

#import <Foundation/Foundation.h>

#import "UARPSuperBinaryMetaDataTable.h"
#import "UARPAssetVersion.h"

@interface UARPSuperBinaryAsset : NSObject {
    NSUInteger _formatVersion;
    NSMutableArray *_tlvs;
    NSMutableArray *_payloads;
    NSURL *_plist;
    NSURL *_plistMetaData;
    NSURL *_url;
    UARPSuperBinaryMetaDataTable *_metaDataTable;
    NSDictionary *_plistDictionary;
    UARPSuperBinaryHeader _superBinaryHeader;
    NSMutableData *_metaData;
}


@property (readonly) UARPAssetVersion *assetVersion; // ivar: _assetVersion
@property (readonly) NSArray *payloads;
@property (readonly) NSArray *tlvs;


+(BOOL)versionFromString:(id)arg0 version:(struct UARPVersion *)arg1 ;
-(BOOL)decomposeToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)expandHeadersAndTLVs:(*id)arg0 ;
-(BOOL)expandPlistWithPayloadsFolder:(id)arg0 error:(*id)arg1 ;
-(BOOL)exportSuperBinaryContentToFilepath:(id)arg0 range:(struct _NSRange )arg1 error:(*id)arg2 ;
-(BOOL)parseFromPlistFormatVersion:(id)arg0 error:(*id)arg1 ;
-(BOOL)parseFromPlistSuperBinaryMetaDataTLVs:(id)arg0 payloadsURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)parseFromPlistSuperBinaryMetaDataValuesTable:(*id)arg0 ;
-(BOOL)parseFromPlistSuperBinaryPayloads:(id)arg0 payloadsURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)parseFromPlistSuperBinaryVersion:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeToURL:(id)arg0 payloadStartOffset:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)computeHash;
-(id)description;
-(id)init;
-(id)initWithFormatVersion:(NSUInteger)arg0 assetVersion:(id)arg1 ;
-(id)initWithFormatVersion:(id)arg0 majorVersion:(id)arg1 minorVersion:(id)arg2 releaseVersion:(id)arg3 buildVersion:(id)arg4 ;
-(id)initWithPlist:(id)arg0 metadataPlist:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)payloadData:(id)arg0 range:(struct _NSRange )arg1 error:(*id)arg2 ;
-(id)prepareMetaData;
-(struct _NSRange )rangeMetadata;
-(void)addMetaDataTLV:(id)arg0 ;
-(void)addPayload:(id)arg0 ;


@end


#endif