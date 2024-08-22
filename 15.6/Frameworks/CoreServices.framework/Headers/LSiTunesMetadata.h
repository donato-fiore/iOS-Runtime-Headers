// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LSITUNESMETADATA_H
#define LSITUNESMETADATA_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LSiTunesMetadata : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *artistName; // ivar: _artistName
@property (readonly, nonatomic) NSUInteger betaVersionIdentifier; // ivar: _betaVersionIdentifier
@property (readonly, nonatomic, getter=isDeviceBasedVPP) BOOL deviceBasedVPP; // ivar: _deviceBasedVPP
@property (readonly, nonatomic, getter=isGameCenterEnabled) BOOL gameCenterEnabled; // ivar: _gameCenterEnabled
@property (readonly, nonatomic, getter=wasGameCenterEverEnabled) BOOL gameCenterEverEnabled; // ivar: _gameCenterEverEnabled
@property (readonly, nonatomic) NSString *genre; // ivar: _genre
@property (readonly, nonatomic) NSUInteger genreIdentifier; // ivar: _genreIdentifier
@property (readonly, nonatomic) NSString *itemName; // ivar: _itemName
@property (readonly, nonatomic, getter=isPurchasedRedownload) BOOL purchasedRedownload; // ivar: _purchasedRedownload
@property (readonly, nonatomic) NSString *ratingLabel; // ivar: _ratingLabel
@property (readonly, nonatomic) NSUInteger ratingRank; // ivar: _ratingRank
@property (readonly, nonatomic) NSString *sourceApp; // ivar: _sourceApp
@property (readonly, nonatomic) NSString *storeCohort; // ivar: _storeCohort
@property (readonly, nonatomic) NSUInteger storeFront; // ivar: _storeFront
@property (readonly, nonatomic) NSUInteger storeItemIdentifier; // ivar: _storeItemIdentifier
@property (readonly, nonatomic) NSArray *subgenres; // ivar: _subgenres
@property (readonly, nonatomic) NSString *variantID; // ivar: _variantID
@property (readonly, nonatomic) NSUInteger versionIdentifier; // ivar: _versionIdentifier


+(BOOL)supportsSecureCoding;
+(id)new;
-(id)_initWithContext:(struct LSContext *)arg0 bundleData:(struct LSBundleData *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)storeCohortWithError:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif