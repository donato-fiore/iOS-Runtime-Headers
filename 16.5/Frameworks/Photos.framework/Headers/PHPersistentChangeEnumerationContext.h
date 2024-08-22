// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHPERSISTENTCHANGEENUMERATIONCONTEXT_H
#define PHPERSISTENTCHANGEENUMERATIONCONTEXT_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface PHPersistentChangeEnumerationContext : NSObject

@property (readonly, nonatomic) NSMutableSet *trashedIdentifiersAsDeletes; // ivar: _trashedIdentifiersAsDeletes
@property (readonly, nonatomic) NSMutableSet *untrashedIdentifiersAsInserts; // ivar: _untrashedIdentifiersAsInserts


-(id)init;


@end


#endif