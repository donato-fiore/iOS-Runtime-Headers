// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATSTOREINFO_H
#define ATSTOREINFO_H

@class NSNumber, NSString, NSDictionary, ICStoreMediaResponseItem;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ATStoreInfo : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSNumber *DSID;
@property (retain, nonatomic) NSString *XID;
@property (retain, nonatomic) NSNumber *adamID;
@property (retain, nonatomic) NSString *appleID;
@property (readonly, nonatomic) NSDictionary *assetDictionary; // ivar: _assetDictionary
@property (retain, nonatomic) NSNumber *cloudDSID;
@property (retain, nonatomic) NSNumber *collectionID;
@property (retain, nonatomic) NSString *dimensions;
@property (readonly, nonatomic) NSDictionary *downloadDictionary; // ivar: _downloadDictionary
@property (retain, nonatomic) NSNumber *drmFree;
@property (retain, nonatomic) NSNumber *endpointType;
@property (retain, nonatomic) NSString *flavor;
@property (retain, nonatomic) NSNumber *matchStatus;
@property (retain, nonatomic) NSString *podcastEpisodeGUID;
@property (retain, nonatomic) NSString *redownloadParams;
@property (retain, nonatomic) NSNumber *redownloadStatus;
@property (retain, nonatomic) NSNumber *sagaID;
@property (retain, nonatomic) ICStoreMediaResponseItem *storeMediaResponseItem; // ivar: _storeMediaResponseItem
@property (retain, nonatomic) NSString *storefrontID;
@property (retain, nonatomic) NSNumber *subscriptionID;
@property (retain, nonatomic) NSString *syncID;
@property (retain, nonatomic) NSNumber *versionID;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif