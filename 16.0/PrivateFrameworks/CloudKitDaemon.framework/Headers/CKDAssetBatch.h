// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDASSETBATCH_H
#define CKDASSETBATCH_H

@class NSArray, NSMutableArray, NSData, NSDictionary;

#import <Foundation/Foundation.h>

#import "CKDAssetTokenRequest.h"
#import "CKDAssetZone.h"

@interface CKDAssetBatch : NSObject

@property (readonly, nonatomic) NSArray *allMMCSItems;
@property (readonly, nonatomic) NSArray *allMMCSSectionItems;
@property (readonly, nonatomic) NSArray *allRegularAndSectionAndRereferenceItems;
@property (readonly, nonatomic) NSArray *allRereferenceMMCSItems;
@property (retain, nonatomic) NSMutableArray *assetRecords; // ivar: _assetRecords
@property (weak, nonatomic) CKDAssetTokenRequest *assetTokenRequest; // ivar: _assetTokenRequest
@property (retain, nonatomic) CKDAssetZone *assetZone; // ivar: _assetZone
@property (retain, nonatomic) NSData *authPutRequest; // ivar: _authPutRequest
@property (retain, nonatomic) NSData *authPutResponse; // ivar: _authPutResponse
@property (retain, nonatomic) NSDictionary *authPutResponseHeaders; // ivar: _authPutResponseHeaders
@property (nonatomic) BOOL isFailed; // ivar: _isFailed
@property (readonly) unsigned int size;
@property (readonly) unsigned int sizeUpperBound;
@property (nonatomic) BOOL useMMCSEncryptionV2; // ivar: _useMMCSEncryptionV2


-(BOOL)isEmptyOfAssets;
-(BOOL)isEmptyOfRereferencesAssets;
-(BOOL)isPackageSectionBatch;
-(BOOL)isRereferenceAssetBatch;
-(id)CKPropertiesDescription;
-(id)allMMCSAndSectionItems;
-(id)description;
-(id)firstMMCSItemError;
-(id)initWithAssetZone:(id)arg0 ;
-(void)addAssetRecord:(id)arg0 ;
-(void)failIfNotDoneAllRegularAndSectionAndRereferenceItemsWithError:(id)arg0 ;


@end


#endif