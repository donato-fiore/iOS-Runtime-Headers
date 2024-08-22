// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCONCEPTRESOLUTIONCONFIGURATION_H
#define HDCONCEPTRESOLUTIONCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HDConceptResolutionConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, nonatomic) NSInteger recordCategoryType; // ivar: _recordCategoryType


-(id)description;
-(id)init;
-(id)initWithCountryCode:(id)arg0 ;
-(id)initWithCountryCode:(id)arg0 recordCategoryType:(NSInteger)arg1 ;


@end


#endif