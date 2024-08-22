// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGFEATUREVALIDATOR_H
#define PGFEATUREVALIDATOR_H

@class NSString, NSPredicate;

#import <Foundation/Foundation.h>

#import "PGFeatureExtractor.h"

@interface PGFeatureValidator : NSObject

@property (readonly, nonatomic) PGFeatureExtractor *featureExtractor; // ivar: _featureExtractor
@property (readonly, nonatomic) NSString *featureName; // ivar: _featureName
@property (readonly, nonatomic) NSPredicate *predicate; // ivar: _predicate


-(BOOL)_generateError:(*id)arg0 errorCode:(NSInteger)arg1 errorMessage:(id)arg2 ;
-(NSInteger)_isValidEntity:(id)arg0 featureExtractor:(id)arg1 error:(*id)arg2 ;
-(NSInteger)featureValidatorType;
-(NSInteger)isValidEntity:(id)arg0 error:(*id)arg1 ;
-(id)initWithPredicate:(id)arg0 featureExtractor:(id)arg1 featureName:(id)arg2 ;


@end


#endif