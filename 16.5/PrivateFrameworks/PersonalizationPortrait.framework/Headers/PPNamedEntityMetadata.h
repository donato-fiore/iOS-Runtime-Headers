// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPNAMEDENTITYMETADATA_H
#define PPNAMEDENTITYMETADATA_H

@class NSSet;
@protocol NSCopying, NSSecureCoding, MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface PPNamedEntityMetadata : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (readonly, nonatomic) unsigned short impressionCount; // ivar: _impressionCount
@property (readonly, nonatomic) unsigned short occurrencesInSource; // ivar: _occurrencesInSource


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNamedEntityMetadata:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)featureValueForName:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImpressionCount:(unsigned short)arg0 occurrencesInSource:(unsigned short)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif