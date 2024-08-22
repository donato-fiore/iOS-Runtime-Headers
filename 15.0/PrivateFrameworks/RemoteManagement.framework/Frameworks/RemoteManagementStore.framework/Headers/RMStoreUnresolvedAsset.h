// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMSTOREUNRESOLVEDASSET_H
#define RMSTOREUNRESOLVEDASSET_H

@class NSString, NSURL, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RMStoreUnresolvedAsset : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *assetIdentifier; // ivar: _assetIdentifier
@property (readonly, copy, nonatomic) NSURL *downloadURL; // ivar: _downloadURL
@property (readonly, copy, nonatomic) NSDictionary *queryParameters; // ivar: _queryParameters
@property (readonly, nonatomic) NSInteger resolveAs; // ivar: _resolveAs


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToUnresolvedAsset:(id)arg0 ;
-(id)initWithAsset:(id)arg0 queryParameters:(id)arg1 ;
-(id)initWithAsset:(id)arg0 queryParameters:(id)arg1 downloadURL:(id)arg2 ;
-(id)initWithAssetIdentifier:(id)arg0 queryParameters:(id)arg1 ;
-(id)initWithAssetIdentifier:(id)arg0 queryParameters:(id)arg1 downloadURL:(id)arg2 ;
-(id)initWithAssetIdentifier:(id)arg0 resolveAs:(NSInteger)arg1 queryParameters:(id)arg2 downloadURL:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif