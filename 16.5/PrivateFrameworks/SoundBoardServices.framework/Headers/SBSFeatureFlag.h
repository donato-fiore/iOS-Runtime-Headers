// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSFEATUREFLAG_H
#define SBSFEATUREFLAG_H

@class NSDictionary, NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface SBSFeatureFlag : NSObject

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (copy, nonatomic) NSString *feature; // ivar: _feature
@property (copy, nonatomic) NSNumber *value; // ivar: _value


-(id)initWith:(id)arg0 andFeature:(id)arg1 andValue:(id)arg2 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif