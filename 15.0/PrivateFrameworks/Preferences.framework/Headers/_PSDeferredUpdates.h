// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSDEFERREDUPDATES_H
#define _PSDEFERREDUPDATES_H

@class NSMutableSet;

#import <Foundation/Foundation.h>

#import "PSSpecifierUpdates.h"

@interface _PSDeferredUpdates : NSObject

@property (nonatomic) BOOL invalidatedSpecifiers; // ivar: _invalidatedSpecifiers
@property (retain, nonatomic) NSMutableSet *searchEntries; // ivar: _searchEntries
@property (retain, nonatomic) PSSpecifierUpdates *specifierUpdates; // ivar: _specifierUpdates


+(id)deferredInvalidationUpdatesWithEntries:(id)arg0 ;
+(id)deferredUpdatesWithEntries:(id)arg0 specifierUpdates:(id)arg1 ;
-(id)initWithSearchEntries:(id)arg0 specifierUpdates:(id)arg1 invalidatedSpecifiers:(BOOL)arg2 ;


@end


#endif