// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPMECARDCACHE_H
#define PPMECARDCACHE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PPMeCardCache : NSObject {
    NSString *_path;
}




-(BOOL)deleteMeCardCache;
-(BOOL)writeMeCardCache:(id)arg0 ;
-(id)init;
-(id)loadMeCardCache;


@end


#endif