// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSUCACHEDIRECTORYPROVIDERDEVICE_H
#define SSUCACHEDIRECTORYPROVIDERDEVICE_H

@class NSString;
@protocol SSUCacheDirectoryProvider;

#import <Foundation/Foundation.h>


@interface SSUCacheDirectoryProviderDevice : NSObject <SSUCacheDirectoryProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createDirectoryAttributes;
+(id)getUserCacheDirectoriesList;
-(id)lookupOrCreateCacheDirectory:(*id)arg0 ;


@end


#endif