// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLEDATASOURCE_H
#define PXPEOPLEDATASOURCE_H

@class NSPredicate, NSString, NSArray, PHFetchResult;
@protocol PXPeopleDataSourceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXPeopleDataSource : NSObject

@property (weak, nonatomic) NSObject<PXPeopleDataSourceDelegate> *delegate; // ivar: _delegate
@property (getter=isDisclosed) BOOL disclosed; // ivar: _disclosed
@property (copy, nonatomic) NSPredicate *filterPredicate; // ivar: _filterPredicate
@property (copy) NSString *localizedDisclosedTitle; // ivar: _localizedDisclosedTitle
@property (copy) NSString *localizedUndisclosedTitle; // ivar: _localizedUndisclosedTitle
@property (nonatomic) NSUInteger maximumNumberOfMembers; // ivar: _maximumNumberOfMembers
@property (copy, nonatomic) NSArray *members; // ivar: _members
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger numberOfMembers;
@property (retain, nonatomic) PHFetchResult *objects; // ivar: _objects
@property (readonly, nonatomic) NSArray *persons;
@property (copy, nonatomic) id *reloadBlock; // ivar: _reloadBlock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reloadQueue; // ivar: _reloadQueue
@property (copy, nonatomic) id *sortComparator; // ivar: _sortComparator
@property (readonly, nonatomic) BOOL useAsynchronousLoad; // ivar: _useAsynchronousLoad


-(NSUInteger)photoQuantityAtIndex:(NSUInteger)arg0 ;
-(id)_itemsArrayFromObjects:(id)arg0 ;
-(id)defaultComparator:(SEL)arg0 ;
-(id)initWithName:(id)arg0 objects:(id)arg1 ;
-(id)initWithName:(id)arg0 objectsReloadBlock:(id)arg1 ;
// -(id)initWithName:(id)arg0 objectsReloadBlock:(id)arg1 asynchronousLoad:(unk)arg2 callbackDelegate:(BOOL)arg3  ;
-(id)localizedTitle;
-(id)memberAtIndex:(NSUInteger)arg0 ;
-(id)personAtIndex:(NSUInteger)arg0 ;
-(id)titleAtIndex:(NSUInteger)arg0 ;
-(void)_asyncLoadImageForItem:(id)arg0 targetSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 resultHandler:(id)arg3 ;
// -(void)_asyncLoadImageForItem:(id)arg0 targetSize:(struct CGSize )arg1 withCompletionBlock:(id)arg2 fastDisplayBlock:(unk)arg3  ;
-(void)_updateMembers;
-(void)dealloc;
-(void)imageAtIndex:(NSUInteger)arg0 targetSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 resultHandler:(id)arg3 ;
-(void)imageAtIndex:(NSUInteger)arg0 targetSize:(struct CGSize )arg1 withCompletionBlock:(id)arg2 ;
// -(void)imageAtIndex:(NSUInteger)arg0 targetSize:(struct CGSize )arg1 withCompletionBlock:(id)arg2 fastDisplayBlock:(unk)arg3  ;
-(void)loadObjectsAndUpdateMembersWithCompletion:(id)arg0 ;
-(void)startListeningForChanges;
-(void)stopListeningForChanges;


@end


#endif