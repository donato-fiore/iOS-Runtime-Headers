// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGASSETCOLLECTIONFEATUREPROVIDER_H
#define PGASSETCOLLECTIONFEATUREPROVIDER_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PGAssetCollectionFeatureProvider : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *featureSpecifications; // ivar: _featureSpecifications


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)allFeatureSpecificationsApplicableToMomentNode:(id)arg0 atMomentIngest:(BOOL)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFeatureSpecifications:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif