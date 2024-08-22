// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLFILEPROVIDER_H
#define WLFILEPROVIDER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WLFileProvider : NSObject

@property (copy, nonatomic) NSString *rootPath; // ivar: _rootPath


-(id)fetchRootPath;


@end


#endif