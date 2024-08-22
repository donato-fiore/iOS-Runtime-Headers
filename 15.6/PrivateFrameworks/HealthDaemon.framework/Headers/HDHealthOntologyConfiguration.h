// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDHEALTHONTOLOGYCONFIGURATION_H
#define HDHEALTHONTOLOGYCONFIGURATION_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface HDHealthOntologyConfiguration : NSObject {
    NSDictionary *_countryConfigurations;
}


@property (readonly, copy, nonatomic) NSArray *allCountryConfigurations;


+(id)bundledHealthOntologyConfiguration;
-(id)configurationForCountryCode:(id)arg0 ;
-(id)init;
-(id)initWithCountryConfigurations:(id)arg0 ;


@end


#endif