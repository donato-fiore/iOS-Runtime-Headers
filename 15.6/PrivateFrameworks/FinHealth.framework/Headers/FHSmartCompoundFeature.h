// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FHSMARTCOMPOUNDFEATURE_H
#define FHSMARTCOMPOUNDFEATURE_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FHSmartCompoundFeature : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *compoundFeatureKey; // ivar: _compoundFeatureKey
@property (readonly, copy, nonatomic) NSString *featureKey; // ivar: _featureKey
@property (readonly, copy, nonatomic) NSString *locale; // ivar: _locale
@property (readonly, copy, nonatomic) NSArray *rankedValues; // ivar: _rankedValues


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCompoundFeatureKey:(id)arg0 smartCompoundFeatures:(id)arg1 locale:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif