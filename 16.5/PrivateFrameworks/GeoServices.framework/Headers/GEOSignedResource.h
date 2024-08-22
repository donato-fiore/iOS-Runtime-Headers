// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOSIGNEDRESOURCE_H
#define GEOSIGNEDRESOURCE_H


#import <Foundation/Foundation.h>


@interface GEOSignedResource : NSObject



+(BOOL)_validateResource:(NSUInteger)arg0 atPath:(id)arg1 data:(*id)arg2 error:(*id)arg3 ;
+(BOOL)_validateResource:(NSUInteger)arg0 withData:(id)arg1 data:(*id)arg2 error:(*id)arg3 ;
+(NSUInteger)typeForResourceByFileName:(id)arg0 ;
+(id)loadResource:(NSUInteger)arg0 atPath:(id)arg1 error:(*id)arg2 ;
+(id)loadResourceAtPath:(id)arg0 error:(*id)arg1 ;
+(id)validateResource:(NSUInteger)arg0 atPath:(id)arg1 ;
+(id)validateResource:(NSUInteger)arg0 withData:(id)arg1 ;
+(id)validateResourceAtPath:(id)arg0 ;


@end


#endif