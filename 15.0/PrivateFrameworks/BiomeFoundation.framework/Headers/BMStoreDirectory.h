// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMSTOREDIRECTORY_H
#define BMSTOREDIRECTORY_H


#import <Foundation/Foundation.h>


@interface BMStoreDirectory : NSObject



+(id)_directoryForType:(unsigned char)arg0 ;
+(id)directoryForPrivateStreams;
+(id)directoryForPublicStreams;
+(id)directoryForRestrictedStreams;
+(void)setBasePathForTestingWithPath:(id)arg0 ;
+(void)unsetBasePathForTesting;


@end


#endif