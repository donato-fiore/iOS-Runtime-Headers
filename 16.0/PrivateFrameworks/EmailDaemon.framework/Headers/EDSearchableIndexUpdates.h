// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDSEARCHABLEINDEXUPDATES_H
#define EDSEARCHABLEINDEXUPDATES_H

@class NSString, NSArray;
@protocol EFPubliclyDescribable;

#import <Foundation/Foundation.h>


@interface EDSearchableIndexUpdates : NSObject <EFPubliclyDescribable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, nonatomic) BOOL hasUpdates;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *itemsRequiringIndexing; // ivar: _itemsRequiringIndexing
@property (copy, nonatomic) NSArray *removedDomainIdentifiers; // ivar: _removedDomainIdentifiers
@property (copy, nonatomic) NSArray *removedIdentifiers; // ivar: _removedIdentifiers
@property (readonly) Class superclass;


+(id)updates;


@end


#endif