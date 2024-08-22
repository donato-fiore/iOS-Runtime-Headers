// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDJOBASSET_H
#define ASDJOBASSET_H

@class NSString, NSNumber, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDJobAsset : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *assetType; // ivar: _assetType
@property (copy, nonatomic) NSString *assetURL; // ivar: _assetURL
@property (copy, nonatomic) NSNumber *bytesTotal; // ivar: _bytesTotal
@property (copy, nonatomic) NSData *dPInfo; // ivar: _dPInfo
@property (copy, nonatomic) NSNumber *expectedDiskspace; // ivar: _expectedDiskspace
@property (copy, nonatomic) NSData *hashArrayData; // ivar: _hashArrayData
@property (copy, nonatomic) NSNumber *hashType; // ivar: _hashType
@property (copy, nonatomic) NSNumber *initialODRSize; // ivar: _initialODRSize
@property (nonatomic) BOOL isExternal; // ivar: _isExternal
@property (nonatomic) BOOL isLocallyCacheable; // ivar: _isLocallyCacheable
@property (nonatomic) BOOL isZipStreamable; // ivar: _isZipStreamable
@property (copy, nonatomic) NSNumber *numberOfBytesToHash; // ivar: _numberOfBytesToHash
@property (copy, nonatomic) NSData *sinfs; // ivar: _sinfs
@property (copy, nonatomic) NSString *storeDownloadKey; // ivar: _storeDownloadKey
@property (copy, nonatomic) NSString *variantID; // ivar: _variantID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif