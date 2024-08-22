// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIODICTIONARYCONSTRAINT_H
#define MIODICTIONARYCONSTRAINT_H

@class NSString;
@protocol MIOFeatureValueConstraint;

#import <Foundation/Foundation.h>


@interface MIODictionaryConstraint : NSObject <MIOFeatureValueConstraint>

 {
    DictionaryFeatureType _dictionaryFeatureTypeParams;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger keyType;
@property (readonly) Class superclass;


-(*void)dictionaryFeatureTypeSpecification;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSpecification:(*void)arg0 ;


@end


#endif