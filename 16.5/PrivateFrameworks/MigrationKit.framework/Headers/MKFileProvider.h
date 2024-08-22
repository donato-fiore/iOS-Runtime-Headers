// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFILEPROVIDER_H
#define MKFILEPROVIDER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MKFileProvider : NSObject

@property (copy, nonatomic) NSString *rootPath; // ivar: _rootPath


-(id)fetchRootPath;


@end


#endif