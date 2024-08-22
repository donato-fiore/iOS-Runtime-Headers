// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHPERSISTENTCHANGEFETCHREQUEST_H
#define PHPERSISTENTCHANGEFETCHREQUEST_H


#import <Foundation/Foundation.h>

#import "PHPersistentChangeToken.h"

@interface PHPersistentChangeFetchRequest : NSObject

@property (nonatomic) NSUInteger maximumChangeThreshold; // ivar: _maximumChangeThreshold
@property (copy, nonatomic) PHPersistentChangeToken *token; // ivar: _token




@end


#endif