// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKREPAIRASSETSOPERATIONINFO_H
#define CKREPAIRASSETSOPERATIONINFO_H

@class NSArray;
@protocol NSSecureCoding;


#import "CKDatabaseOperationInfo.h"
#import "CKUploadRequestConfiguration.h"

@interface CKRepairAssetsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>



@property (retain, nonatomic) NSArray *assetMetadata; // ivar: _assetMetadata
@property (retain, nonatomic) NSArray *assets; // ivar: _assets
@property (retain, nonatomic) NSArray *packageMetadata; // ivar: _packageMetadata
@property (retain, nonatomic) NSArray *packages; // ivar: _packages
@property (retain, nonatomic) NSArray *unavailableAssets; // ivar: _unavailableAssets
@property (retain, nonatomic) NSArray *unavailablePackages; // ivar: _unavailablePackages
@property (retain, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration; // ivar: _uploadRequestConfiguration


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif