// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MIOSEQUENCECONSTRAINT_H
#define MIOSEQUENCECONSTRAINT_H

@class NSString;
@protocol MIOFeatureValueConstraint;

#import <Foundation/Foundation.h>

#import "MIOFeatureDescription.h"

@interface MIOSequenceConstraint : NSObject <MIOFeatureValueConstraint>

 {
    SequenceFeatureType _sequenceFeatureTypeParams;
}


@property (readonly, nonatomic) _MIORange countRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) MIOFeatureDescription *valueDescription; // ivar: _valueDescription


-(*void)sequenceFeatureTypeSpecification;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSpecification:(*void)arg0 ;


@end


#endif