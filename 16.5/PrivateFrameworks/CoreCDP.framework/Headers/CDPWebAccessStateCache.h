// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPWEBACCESSSTATECACHE_H
#define CDPWEBACCESSSTATECACHE_H


#import <Foundation/Foundation.h>


@interface CDPWebAccessStateCache : NSObject

@property BOOL isValid; // ivar: _isValid
@property NSUInteger webAccessStatus; // ivar: _webAccessStatus


+(id)sharedInstance;
-(id)init;


@end


#endif