// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHEALTHONTOLOGYCOUNTRYCONFIGURATION_H
#define HDHEALTHONTOLOGYCOUNTRYCONFIGURATION_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>


@interface HDHealthOntologyCountryConfiguration : NSObject

@property (readonly, nonatomic) NSUInteger analyticsOptions; // ivar: _analyticsOptions
@property (readonly, copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, copy, nonatomic) NSSet *supportedCodingSystems; // ivar: _supportedCodingSystems


-(id)initWithCountryCode:(id)arg0 supportedCodingSystems:(id)arg1 analyticsOptions:(NSUInteger)arg2 ;


@end


#endif