// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGDICTIONARYCONFIGURATIONSOURCE_H
#define PGDICTIONARYCONFIGURATIONSOURCE_H

@class NSDictionary, NSString;
@protocol PGConfigurationSource;

#import <Foundation/Foundation.h>


@interface PGDictionaryConfigurationSource : NSObject <PGConfigurationSource>



@property (copy, nonatomic) NSDictionary *configurationData; // ivar: _configurationData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDictionary:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;


@end


#endif