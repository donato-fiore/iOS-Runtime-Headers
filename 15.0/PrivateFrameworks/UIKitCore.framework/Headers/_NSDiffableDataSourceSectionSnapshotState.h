// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSDIFFABLEDATASOURCESECTIONSNAPSHOTSTATE_H
#define _NSDIFFABLEDATASOURCESECTIONSNAPSHOTSTATE_H

@class NSOrderedSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_UITreeDataSourceSnapshotter.h"

@interface _NSDiffableDataSourceSectionSnapshotState : NSObject <NSCopying>

 {
    ? _stateFlags;
}


@property (readonly, nonatomic) NSOrderedSet *identifiers; // ivar: _identifiers
@property (readonly, nonatomic) _UITreeDataSourceSnapshotter *snapshotter; // ivar: _snapshotter


-(BOOL)containsIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)indexOfIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithSnapshotter:(id)arg0 identifiers:(id)arg1 ;
-(id)initWithSnapshotter:(id)arg0 identifiers:(id)arg1 identifiersHaveGuaranteedPerformance:(BOOL)arg2 ;


@end


#endif