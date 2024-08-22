// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGPLISTFILECONFIGURATIONSOURCE_H
#define PGPLISTFILECONFIGURATIONSOURCE_H

@class NSDictionary, NSString;
@protocol PGConfigurationSource;

#import <Foundation/Foundation.h>


@interface PGPlistFileConfigurationSource : NSObject <PGConfigurationSource>



@property (copy, nonatomic) NSDictionary *configurationData; // ivar: _configurationData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPlistFileURL:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;


@end


#endif