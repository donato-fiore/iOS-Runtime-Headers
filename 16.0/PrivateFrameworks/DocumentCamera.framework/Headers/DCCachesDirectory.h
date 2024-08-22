// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DCCACHESDIRECTORY_H
#define DCCACHESDIRECTORY_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface DCCachesDirectory : NSObject

@property (readonly, nonatomic) NSURL *cachesDirectoryURL; // ivar: _cachesDirectoryURL


+(id)sharedCachesDirectory;
-(id)init;


@end


#endif