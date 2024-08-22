// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGCONFIGURATION_H
#define PGCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface PGConfiguration : NSObject

@property (readonly, nonatomic) CGFloat version; // ivar: _version


+(id)_persistedConfigurationPath;
+(id)name;
+(id)persistedConfiguration;
-(id)_configurationDictionary;
-(id)description;
-(id)initWithSources:(id)arg0 version:(CGFloat)arg1 ;
-(id)propertyKeys;
-(void)_configureWithSource:(id)arg0 propertyKeys:(id)arg1 ;
-(void)deletePersistedConfiguration;
-(void)persistConfiguration;


@end


#endif