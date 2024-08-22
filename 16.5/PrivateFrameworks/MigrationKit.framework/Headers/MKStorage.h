// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKSTORAGE_H
#define MKSTORAGE_H


#import <Foundation/Foundation.h>


@interface MKStorage : NSObject

@property (nonatomic) NSUInteger availableSpaceInBytes; // ivar: _availableSpaceInBytes
@property (nonatomic) NSUInteger availableSpaceInGigabytes; // ivar: _availableSpaceInGigabytes
@property (nonatomic) NSUInteger availableSpaceInMegabytes; // ivar: _availableSpaceInMegabytes
@property (nonatomic) NSUInteger availableSpaceInTerabytes; // ivar: _availableSpaceInTerabytes


-(id)init;


@end


#endif