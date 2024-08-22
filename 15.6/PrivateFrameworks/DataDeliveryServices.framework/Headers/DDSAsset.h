// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DDSASSET_H
#define DDSASSET_H

@class NSString, NSDictionary, NSURL, MAAsset;

#import <Foundation/Foundation.h>


@interface DDSAsset : NSObject

@property (readonly, nonatomic) NSUInteger assetState; // ivar: _assetState
@property (readonly, nonatomic) NSString *assetType; // ivar: _assetType
@property (readonly, nonatomic) NSString *assetUUID;
@property (readonly, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, nonatomic) NSUInteger compatibilityVersion;
@property (readonly, nonatomic) NSUInteger contentVersion;
@property (readonly, nonatomic) NSString *dataType; // ivar: _dataType
@property (retain, nonatomic) NSString *debuggingID; // ivar: _debuggingID
@property (readonly, nonatomic) NSString *installDate;
@property (readonly, nonatomic) NSURL *localURL; // ivar: _localURL
@property (readonly, nonatomic) NSString *locale;
@property (retain, nonatomic) MAAsset *maAsset; // ivar: _maAsset
@property (readonly, nonatomic) NSString *shortName;
@property (retain, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(id)asset;
+(id)assetWithMAAsset:(id)arg0 ;
+(id)debuggingIDsForAssets:(id)arg0 ;
+(id)uniqueIdentifierForMAAsset:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAsset:(id)arg0 ;
-(id)description;
-(id)init;
-(void)_mergeAttributes:(id)arg0 ;


@end


#endif