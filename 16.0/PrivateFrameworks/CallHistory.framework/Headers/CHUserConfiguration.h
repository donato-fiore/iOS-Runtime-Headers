// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHUSERCONFIGURATION_H
#define CHUSERCONFIGURATION_H

@protocol CHKeyValueDataSource><CHMutableKeyValueDataSource;


#import "CHConfiguration.h"

@interface CHUserConfiguration : CHConfiguration

@property (readonly, nonatomic) NSObject<CHKeyValueDataSource><CHMutableKeyValueDataSource> *dataSource;


+(id)registeredDefaults;
+(id)userDefaults;
-(BOOL)propertyNameForKeyPath:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)synchronize;


@end


#endif