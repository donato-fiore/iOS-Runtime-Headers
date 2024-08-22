// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSTOREFILEASSETFAIRPLAYINFO_H
#define MPSTOREFILEASSETFAIRPLAYINFO_H

@class ICStoreFileAssetFairPlayInfo, NSData, NSDictionary;

#import <Foundation/Foundation.h>


@interface MPStoreFileAssetFairPlayInfo : NSObject {
    ICStoreFileAssetFairPlayInfo *_internalInfo;
}


@property (readonly, copy, nonatomic) NSData *dpInfoData;
@property (readonly, nonatomic) NSInteger identifier;
@property (readonly, copy, nonatomic) NSData *pinfData;
@property (readonly, copy, nonatomic) NSDictionary *purchaseBundleSinfDictionary;
@property (readonly, copy, nonatomic) NSDictionary *responseSinfDictionary;
@property (readonly, copy, nonatomic) NSData *sinf2Data;
@property (readonly, copy, nonatomic) NSData *sinfData;


-(id)initWithResponseSinfDictionary:(id)arg0 ;
-(id)initWithiTunesCloudStoreFileAssetFairPlayInfo:(id)arg0 ;


@end


#endif