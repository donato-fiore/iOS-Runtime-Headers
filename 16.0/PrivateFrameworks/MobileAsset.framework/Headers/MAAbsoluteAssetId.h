// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAABSOLUTEASSETID_H
#define MAABSOLUTEASSETID_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MAAbsoluteAssetId : NSObject <NSSecureCoding>

 {
    NSString *_allAttributesHash;
    NSString *_assetIdHash;
    NSString *_nonAssetIdHash;
    NSString *_downloadContentHash;
    NSString *_downloadUrlHash;
    NSString *_downloadPolicyHash;
    NSString *_pallasAssetIdHash;
}


@property (retain, nonatomic) NSString *assetId; // ivar: _assetId
@property (retain, nonatomic) NSString *assetType; // ivar: _assetType


+(BOOL)supportsSecureCoding;
-(BOOL)hasOnlyAssetTypeAndId;
-(BOOL)isEqual:(id)arg0 ;
-(id)allAttributesHash;
-(id)contentHash;
-(id)description;
-(id)diffFrom:(id)arg0 ;
-(id)diffFromAsset:(id)arg0 ;
-(id)diffFromAssetId:(id)arg0 assetType:(id)arg1 attributes:(id)arg2 ;
-(id)encodeAsPlist;
-(id)initWithAssetId:(id)arg0 forAssetType:(id)arg1 ;
-(id)initWithAssetId:(id)arg0 forAssetType:(id)arg1 attributes:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlist:(id)arg0 ;
-(id)nonIdHash;
-(id)pallasDynamicAssetIdHash;
-(id)policyHash;
-(id)summary;
-(id)urlHash;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif