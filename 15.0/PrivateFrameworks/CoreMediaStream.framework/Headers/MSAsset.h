// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSASSET_H
#define MSASSET_H

@class NSString, NSDate, NSError, NSData, NSURL, NSDictionary;
@protocol MMCSAsset, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MSAsset : NSObject <MMCSAsset, NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *GUID; // ivar: _GUID
@property (retain, nonatomic) NSString *MMCSAccessHeader; // ivar: _MMCSAccessHeader
@property (retain, nonatomic) NSDate *MMCSAccessHeaderTimeStamp; // ivar: _MMCSAccessHeaderTimeStamp
@property (retain, nonatomic) NSError *MMCSError;
@property (retain, nonatomic) NSData *MMCSHash; // ivar: _fileHash
@property (nonatomic) unsigned int MMCSItemFlags;
@property (nonatomic) NSUInteger MMCSItemID;
@property (nonatomic) NSUInteger MMCSItemSize; // ivar: _protocolFileSize
@property (retain, nonatomic) NSString *MMCSReceipt; // ivar: _MMCSReceipt
@property (retain, nonatomic) NSURL *MMCSURL; // ivar: _MMCSURL
@property (retain, nonatomic) NSString *MMCSUTI; // ivar: _type
@property (retain, nonatomic) NSString *assetCollectionGUID; // ivar: _assetCollectionGUID
@property (nonatomic) BOOL assetDataAvailableOnServer; // ivar: _assetDataAvailableOnServer
@property (retain, nonatomic) NSDate *batchCreationDate; // ivar: _batchCreationDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSData *fileData; // ivar: _fileData
@property (retain, nonatomic) NSData *fileHash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *masterAssetHash; // ivar: _masterAssetHash
@property (nonatomic) NSUInteger mediaAssetType; // ivar: _mediaAssetType
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (retain, nonatomic) NSString *path; // ivar: _path
@property (retain, nonatomic) NSDate *photoCreationDate; // ivar: _photoCreationDate
@property (nonatomic) NSUInteger protocolFileSize;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
+(id)MSASPAssetFromProtocolDictionary:(id)arg0 ;
+(id)asset;
+(id)assetWithAsset:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPhoto;
-(BOOL)isVideo;
-(NSUInteger)_fileSize;
-(NSUInteger)_fileSizeOnDisk;
-(id)MMCSItemType;
-(id)MSASPProtocolDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGUID:(id)arg0 ;
-(id)metadataValueForKey:(id)arg0 ;
-(int)MMCSOpenNewFileDescriptor;
-(void)addMetadataValue:(id)arg0 forKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif