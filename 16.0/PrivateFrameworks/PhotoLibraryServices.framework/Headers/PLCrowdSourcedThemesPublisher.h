// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCROWDSOURCEDTHEMESPUBLISHER_H
#define PLCROWDSOURCEDTHEMESPUBLISHER_H


#import <Foundation/Foundation.h>


@interface PLCrowdSourcedThemesPublisher : NSObject



+(id)_biomeStreamForStream:(NSUInteger)arg0 pathManager:(id)arg1 ;
+(id)_nameForStream:(NSUInteger)arg0 ;
+(id)publishedUUIDsInStream:(NSUInteger)arg0 pathManager:(id)arg1 ;
+(void)publishUUIDs:(id)arg0 stream:(NSUInteger)arg1 pathManager:(id)arg2 ;


@end


#endif