// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPLOCATION_H
#define PPLOCATION_H

@class NSString, NSSet, CLPlacemark;
@protocol NSCopying, NSSecureCoding, MLFeatureProvider;

#import <Foundation/Foundation.h>

#import "PPLocationRecord.h"

@interface PPLocation : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider>



@property (readonly, nonatomic) unsigned short category; // ivar: _category
@property (readonly, nonatomic) NSString *clusterIdentifier; // ivar: _clusterIdentifier
@property (readonly, nonatomic) NSSet *featureNames;
@property (readonly, nonatomic) PPLocationRecord *mostRelevantRecord; // ivar: _mostRelevantRecord
@property (readonly, nonatomic) CLPlacemark *placemark; // ivar: _placemark


+(BOOL)supportsSecureCoding;
+(id)clusterIdentifierFromPlacemark:(id)arg0 ;
+(id)describeCategory:(unsigned short)arg0 ;
+(unsigned short)categoryForDescription:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLocation:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customizedDescription;
-(id)description;
-(id)featureValueForName:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlacemark:(id)arg0 category:(unsigned short)arg1 mostRelevantRecord:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif