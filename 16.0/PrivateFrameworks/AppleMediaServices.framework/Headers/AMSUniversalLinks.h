// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUNIVERSALLINKS_H
#define AMSUNIVERSALLINKS_H


#import <Foundation/Foundation.h>

#import "AMSUniversalLinksConnection.h"

@interface AMSUniversalLinks : NSObject

@property (retain, nonatomic) AMSUniversalLinksConnection *connection; // ivar: _connection


+(id)_privateQueue;
+(void)update;
-(id)init;
-(id)updateUniversalLinks;


@end


#endif