// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDIFFABLEDATASOURCESECTIONTRANSACTION_H
#define _UIDIFFABLEDATASOURCESECTIONTRANSACTION_H

@class NSOrderedCollectionDifference;

#import <Foundation/Foundation.h>

#import "NSDiffableDataSourceSectionSnapshot.h"

@interface _UIDiffableDataSourceSectionTransaction : NSObject

@property (readonly, nonatomic) NSOrderedCollectionDifference *difference; // ivar: _difference
@property (readonly, nonatomic) NSDiffableDataSourceSectionSnapshot *finalSnapshot; // ivar: _finalSnapshot
@property (readonly, nonatomic) NSDiffableDataSourceSectionSnapshot *initialSnapshot; // ivar: _initialSnapshot
@property (readonly, nonatomic) id *sectionIdentifier; // ivar: _sectionIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithSectionIdentifier:(id)arg0 initialSnapshot:(id)arg1 finalSnapshot:(id)arg2 difference:(id)arg3 ;


@end


#endif