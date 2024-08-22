// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENTITYMAPCACHEENTRY_H
#define ENTITYMAPCACHEENTRY_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface EntityMapCacheEntry : NSObject

@property (retain) NSObject *entityName; // ivar: _entityName
@property (retain) NSDate *expiryTime; // ivar: _expiryTime


-(id)description;


@end


#endif