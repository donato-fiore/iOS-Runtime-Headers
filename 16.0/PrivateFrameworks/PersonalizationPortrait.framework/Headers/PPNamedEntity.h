// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPNAMEDENTITY_H
#define PPNAMEDENTITY_H

@class NSString, NSSet;
@protocol NSCopying, NSSecureCoding, MLFeatureProvider;

#import <Foundation/Foundation.h>

#import "PPNamedEntityRecord.h"

@interface PPNamedEntity : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider>



@property (readonly, nonatomic) NSString *bestLanguage; // ivar: _bestLanguage
@property (readonly, nonatomic) NSUInteger category; // ivar: _category
@property (readonly, nonatomic) NSString *clusterIdentifier; // ivar: _clusterIdentifier
@property (readonly, nonatomic) NSString *dynamicCategory; // ivar: _dynamicCategory
@property (readonly, nonatomic) NSSet *featureNames;
@property (readonly, nonatomic) PPNamedEntityRecord *mostRelevantRecord;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) CGFloat sentimentScore;


+(BOOL)supportsSecureCoding;
+(NSUInteger)categoryForDescription:(id)arg0 ;
+(id)clusterIdentifierFromName:(id)arg0 ;
+(id)describeCategory:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNamedEntity:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)featureValueForName:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 category:(NSUInteger)arg1 dynamicCategory:(id)arg2 language:(id)arg3 ;
-(id)initWithName:(id)arg0 category:(NSUInteger)arg1 dynamicCategory:(id)arg2 language:(id)arg3 mostRelevantRecord:(id)arg4 ;
-(id)initWithName:(id)arg0 category:(NSUInteger)arg1 language:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif