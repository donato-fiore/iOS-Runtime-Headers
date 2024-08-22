// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRSENSORSCACHE_H
#define SRSENSORSCACHE_H

@class NSCache, NSArray;

#import <Foundation/Foundation.h>


@interface SRSensorsCache : NSObject {
    NSCache *_sensorsCache;
    NSArray *_sensorDescriptionsDirs;
}




+(void)initialize;
+(void)setDefaultCache:(id)arg0 ;
-(id)init;
-(id)initWithDirectories:(id)arg0 ;
-(void)dealloc;


@end


#endif