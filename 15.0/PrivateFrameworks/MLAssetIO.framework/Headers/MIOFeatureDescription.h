// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIOFEATUREDESCRIPTION_H
#define MIOFEATUREDESCRIPTION_H

@class NSString;
@protocol NSMutableCopying, MIOFeatureValueConstraint;

#import <Foundation/Foundation.h>


@interface MIOFeatureDescription : NSObject <NSMutableCopying>

 {
    FeatureDescription _featureDescriptionParams;
}


@property (readonly, copy, nonatomic) NSObject<MIOFeatureValueConstraint> *constraint; // ivar: _constraint
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL optional;
@property (readonly, copy, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) NSInteger type;


-(*void)featureDescriptionSpecification;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSpecification:(*void)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif