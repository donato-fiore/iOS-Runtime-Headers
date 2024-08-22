// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DASBIOMESTREAM_H
#define _DASBIOMESTREAM_H


#import <Foundation/Foundation.h>


@interface _DASBiomeStream : NSObject



+(id)sharedEventQueue;
+(id)sourceForStreamWithIdentifier:(id)arg0 ;
+(void)postEvent:(id)arg0 ;


@end


#endif