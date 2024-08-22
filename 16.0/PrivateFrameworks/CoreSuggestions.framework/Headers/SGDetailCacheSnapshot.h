// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGDETAILCACHESNAPSHOT_H
#define SGDETAILCACHESNAPSHOT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SGKeyValueCacheFile.h"

@interface SGDetailCacheSnapshot : NSObject {
    SGKeyValueCacheFile *_phoneCache;
    SGKeyValueCacheFile *_emailCache;
    NSString *_maybeFormat;
}






@end


#endif