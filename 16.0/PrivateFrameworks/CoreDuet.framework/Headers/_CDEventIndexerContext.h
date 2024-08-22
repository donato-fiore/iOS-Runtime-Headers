// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDEVENTINDEXERCONTEXT_H
#define _CDEVENTINDEXERCONTEXT_H

@class NSDate;
@protocol OS_os_transaction;

#import <Foundation/Foundation.h>

#import "_CDEventIndexerBookmark.h"

@interface _CDEventIndexerContext : NSObject {
    _CDEventIndexerBookmark *_bookmark;
    NSInteger _currentVersion;
    NSUInteger _batchSize;
    id *_completion;
    NSDate *_indexDate;
    NSObject<OS_os_transaction> *_transaction;
}




-(id)description;
-(id)init;


@end


#endif