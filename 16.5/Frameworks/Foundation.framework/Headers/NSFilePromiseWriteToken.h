// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSFILEPROMISEWRITETOKEN_H
#define NSFILEPROMISEWRITETOKEN_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface NSFilePromiseWriteToken : NSObject

@property (copy) NSURL *logicalURL; // ivar: logicalURL
@property (copy) NSURL *promiseURL; // ivar: promiseURL


-(void)dealloc;


@end


#endif