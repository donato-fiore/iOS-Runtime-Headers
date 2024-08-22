// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGSEARCHTHUMBNAILMOMENTASSETPAIRUUID_H
#define PGSEARCHTHUMBNAILMOMENTASSETPAIRUUID_H

@class NSString;
@protocol NSSecureCoding, NSCoding;

#import <Foundation/Foundation.h>


@interface PGSearchThumbnailMomentAssetPairUUID : NSObject <NSSecureCoding, NSCoding>



@property (readonly, nonatomic) NSString *assetUUID; // ivar: _assetUUID
@property (readonly, nonatomic) NSString *momentUUID; // ivar: _momentUUID


+(BOOL)supportsSecureCoding;
-(id)initWithAssetUUID:(id)arg0 momentUUID:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif