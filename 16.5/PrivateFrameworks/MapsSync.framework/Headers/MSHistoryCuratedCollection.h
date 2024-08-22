// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSHISTORYCURATEDCOLLECTION_H
#define MSHISTORYCURATEDCOLLECTION_H



#import "MSHistoryItem.h"

@interface MSHistoryCuratedCollection : MSHistoryItem {
    ? _curatedCollectionIdentifier;
    ? _resultProviderIdentifier;
}


@property (nonatomic) NSUInteger curatedCollectionIdentifier;
@property (nonatomic) int resultProviderIdentifier;


+(Class)managedClass;
-(id)initWithObject:(id)arg0 store:(id)arg1 ;
-(id)initWithStore:(id)arg0 curatedCollectionIdentifier:(NSUInteger)arg1 resultProviderIdentifier:(int)arg2 ;
-(void)setPropertiesUnsafeWithManagedObject:(id)arg0 ;


@end


#endif