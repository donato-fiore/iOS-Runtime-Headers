// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3QUERYRESULTSET_BACKINGSTORE_H
#define ML3QUERYRESULTSET_BACKINGSTORE_H


#import <Foundation/Foundation.h>


@interface ML3QueryResultSet_BackingStore : NSObject {
    vector<long long, std::allocator<long long>> _persistentIDs;
    vector<unsigned char, std::allocator<unsigned char>> _sections;
}


@property (readonly, nonatomic) NSUInteger count;


-(BOOL)containsPersistentIDs:(*void)arg0 ;
-(NSInteger)persistentIDAtIndex:(NSUInteger)arg0 ;
-(id)backingStoreByRemovingPersistentIDs:(*void)arg0 ;
-(void)enumeratePersistentIDsUsingBlock:(id)arg0 ;
-(void)enumerateSectionsUsingBlock:(id)arg0 ;
-(void)reverseEnumeratePersistentIDsUsingBlock:(id)arg0 ;
-(void)reverseEnumerateSectionsUsingBlock:(id)arg0 ;


@end


#endif