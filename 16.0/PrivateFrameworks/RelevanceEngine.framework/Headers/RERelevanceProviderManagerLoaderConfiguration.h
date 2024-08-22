// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RERELEVANCEPROVIDERMANAGERLOADERCONFIGURATION_H
#define RERELEVANCEPROVIDERMANAGERLOADERCONFIGURATION_H

@class NSString;
@protocol REClassLoaderConfiguration;

#import <Foundation/Foundation.h>


@interface RERelevanceProviderManagerLoaderConfiguration : NSObject <REClassLoaderConfiguration>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(Class)desiredClassForLoader;
-(Class)desiredClassFromBundle:(id)arg0 forKey:(id)arg1 ;


@end


#endif