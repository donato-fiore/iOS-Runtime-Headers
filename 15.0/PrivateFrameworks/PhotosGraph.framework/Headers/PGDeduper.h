// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGDEDUPER_H
#define PGDEDUPER_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface PGDeduper : NSObject

@property (copy, nonatomic) NSSet *identifiersOfRequiredItems; // ivar: _identifiersOfRequiredItems


-(BOOL)itemIsRequired:(id)arg0 ;
-(id)deduplicatedItemsWithItems:(id)arg0 debugInfo:(id)arg1 progressBlock:(id)arg2 ;
-(id)requiredItemsInItems:(id)arg0 ;


@end


#endif