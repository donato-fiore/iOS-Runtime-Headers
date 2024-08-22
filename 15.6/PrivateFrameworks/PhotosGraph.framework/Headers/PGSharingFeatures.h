// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGSHARINGFEATURES_H
#define PGSHARINGFEATURES_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PGSharingFeatures : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *assetFeatureVectors; // ivar: _assetFeatureVectors
@property (readonly, nonatomic) NSArray *classes; // ivar: _classes
@property (readonly, nonatomic) NSArray *momentFeatureVectors; // ivar: _momentFeatureVectors


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithClasses:(id)arg0 momentFeatureVectors:(id)arg1 assetFeatureVectors:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif