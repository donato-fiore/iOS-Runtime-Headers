// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSTATUSDOMAINDATACHANGELOG_H
#define STSTATUSDOMAINDATACHANGELOG_H

@class BSIntegerSet, NSDictionary, NSOrderedSet;

#import <Foundation/Foundation.h>


@interface STStatusDomainDataChangeLog : NSObject

@property (readonly, nonatomic) BSIntegerSet *domainsWithData;
@property (readonly, copy, nonatomic) NSDictionary *recordsByKey; // ivar: _recordsByKey
@property (readonly, copy, nonatomic) NSOrderedSet *sortedRecordKeys; // ivar: _sortedRecordKeys


-(id)currentDataForDomain:(NSUInteger)arg0 ;
-(id)initWithRecordKeys:(id)arg0 ;
-(id)recordForKey:(id)arg0 ;


@end


#endif