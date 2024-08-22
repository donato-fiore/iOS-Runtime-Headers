// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSASSETCOLLECTION_H
#define MSASSETCOLLECTION_H

@class NSArray, NSString, NSData, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MSAsset.h"

@interface MSAssetCollection : NSObject <NSSecureCoding>

 {
    NSArray *_derivedAssets;
}


@property (retain, nonatomic) NSString *assetCollectionID; // ivar: _assetCollectionID
@property (retain, nonatomic) NSString *ctag; // ivar: _ctag
@property (retain, nonatomic) NSArray *derivedAssets;
@property (retain, nonatomic) NSString *fileName; // ivar: _fileName
@property (nonatomic) NSInteger initialFailureDate; // ivar: _initialFailureDate
@property (retain, nonatomic) MSAsset *masterAsset; // ivar: _masterAsset
@property (readonly, weak, nonatomic) NSData *masterAssetHash;
@property (retain, nonatomic) NSDate *serverUploadedDate; // ivar: _serverUploadedDate
@property (nonatomic) BOOL wasDeleted; // ivar: _wasDeleted


+(BOOL)supportsSecureCoding;
+(id)collectionWithMasterAsset:(id)arg0 fileName:(id)arg1 ;
+(id)collectionWithMasterAsset:(id)arg0 fileName:(id)arg1 derivedAssets:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMasterAsset:(id)arg0 fileName:(id)arg1 derivedAssets:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif