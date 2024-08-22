// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REDATASOURCELOADERCONFIGURATION_H
#define REDATASOURCELOADERCONFIGURATION_H

@class NSString;
@protocol REClassLoaderConfiguration;

#import <Foundation/Foundation.h>


@interface REDataSourceLoaderConfiguration : NSObject <REClassLoaderConfiguration>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)shouldLoadBundleClass:(Class)arg0 forKey:(id)arg1 ;
-(Class)desiredClassForLoader;
-(Class)desiredClassFromBundle:(id)arg0 forKey:(id)arg1 ;


@end


#endif