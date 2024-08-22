// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPCOLLECTIONSQUERY_H
#define MSPCOLLECTIONSQUERY_H

@class NSArray;


#import "NewMSPQuery.h"
#import "MSPFavoritesContainer.h"

@interface MSPCollectionsQuery : NewMSPQuery

@property (readonly) NSArray *contents;
@property (retain, nonatomic) MSPFavoritesContainer *itemContainer; // ivar: _itemContainer
@property (retain, nonatomic) NewMSPQuery *itemQuery; // ivar: _itemQuery


-(id)initWithCollectionsContainer:(id)arg0 itemContainer:(id)arg1 delegate:(id)arg2 ;
-(id)initWithCollectionsContainer:(id)arg0 itemContainer:(id)arg1 delegate:(id)arg2 filteredWithBlock:(id)arg3 ;
-(id)subQueryFilteredWithBlock:(id)arg0 ;
-(void)addOrUpdateObject:(id)arg0 completion:(id)arg1 ;
-(void)addOrUpdateObjects:(id)arg0 completion:(id)arg1 ;
// -(void)processContentsUsingBlock:(id)arg0 completion:(unk)arg1  ;
-(void)queryContentsDidChange:(id)arg0 contentsVersion:(NSUInteger)arg1 ;
-(void)removeObject:(id)arg0 completion:(id)arg1 ;
-(void)removeObjects:(id)arg0 completion:(id)arg1 ;
-(void)setCachedContents:(id)arg0 ;


@end


#endif