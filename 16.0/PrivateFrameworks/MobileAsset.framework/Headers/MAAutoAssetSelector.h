// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAAUTOASSETSELECTOR_H
#define MAAUTOASSETSELECTOR_H

@class NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MAAutoAssetSelector : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *assetSpecifier; // ivar: _assetSpecifier
@property (readonly, nonatomic) NSString *assetType; // ivar: _assetType
@property (retain, nonatomic) NSString *assetVersion; // ivar: _assetVersion
@property (readonly, nonatomic) NSData *downloadDecryptionKey; // ivar: _downloadDecryptionKey


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copy;
-(id)copyClearingWriteOnlyFields;
-(id)description;
-(id)initForAssetType:(id)arg0 ;
-(id)initForAssetType:(id)arg0 withAssetSpecifier:(id)arg1 ;
-(id)initForAssetType:(id)arg0 withAssetSpecifier:(id)arg1 matchingAssetVersion:(id)arg2 ;
-(id)initForAssetType:(id)arg0 withAssetSpecifier:(id)arg1 matchingAssetVersion:(id)arg2 usingDecryptionKey:(id)arg3 ;
-(id)initForAssetType:(id)arg0 withAssetSpecifier:(id)arg1 usingDecryptionKey:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)persistedEntryID;
-(id)summary;
-(void)assignAssetVersion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif