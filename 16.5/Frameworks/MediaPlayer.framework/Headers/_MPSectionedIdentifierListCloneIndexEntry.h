// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPSECTIONEDIDENTIFIERLISTCLONEINDEXENTRY_H
#define _MPSECTIONEDIDENTIFIERLISTCLONEINDEXENTRY_H

@class NSMutableSet;

#import <Foundation/Foundation.h>

#import "MPSectionedIdentifierListItemEntry.h"

@interface _MPSectionedIdentifierListCloneIndexEntry : NSObject

@property (retain, nonatomic) NSMutableSet *clonedEntries; // ivar: _clonedEntries
@property (retain, nonatomic) MPSectionedIdentifierListItemEntry *rootEntry; // ivar: _rootEntry


-(id)init;


@end


#endif