// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEWMSPQUERY_H
#define NEWMSPQUERY_H

@class NSArray, NSString, NSLock;
@protocol MSPContainerObserver, MSPQueryDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MSPContainer.h"
#import "NewMSPQuery.h"

@interface NewMSPQuery : NSObject <MSPContainerObserver, MSPQueryDelegate>



@property (retain, nonatomic) NSArray *cachedContents; // ivar: _cachedContents
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, nonatomic) MSPContainer *container; // ivar: _container
@property (readonly) NSUInteger contentVersion; // ivar: _contentVersion
@property (readonly) NSArray *contents;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MSPQueryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *filterBlock; // ivar: _filterBlock
@property (readonly) NSUInteger hash;
@property BOOL isReady; // ivar: _isReady
@property (retain, nonatomic) NSLock *lock; // ivar: _lock
@property (retain, nonatomic) NewMSPQuery *parentQuery; // ivar: _parentQuery
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue
@property (readonly) Class superclass;


-(BOOL)isObject:(id)arg0 equalTo:(id)arg1 ;
-(id)initWithContainer:(id)arg0 delegate:(id)arg1 ;
-(id)initWithContainer:(id)arg0 delegate:(id)arg1 filteredWithBlock:(id)arg2 ;
-(id)initWithParentQuery:(id)arg0 container:(id)arg1 delegate:(id)arg2 filteredWithBlock:(id)arg3 ;
-(id)subQueryFilteredWithBlock:(id)arg0 ;
-(void)_notifyDelegate:(id)arg0 ;
-(void)addOrUpdateObject:(id)arg0 completion:(id)arg1 ;
-(void)addOrUpdateObjects:(id)arg0 completion:(id)arg1 ;
-(void)container:(id)arg0 didEditWithNewContents:(id)arg1 orderedEdits:(id)arg2 cause:(NSInteger)arg3 context:(id)arg4 ;
-(void)containerDidEraseContents:(id)arg0 fromStorageTypes:(NSUInteger)arg1 ;
-(void)fetchContentsWithHandler:(id)arg0 ;
-(void)moveObject:(id)arg0 afterObject:(id)arg1 completion:(id)arg2 ;
-(void)moveObject:(id)arg0 beforeObject:(id)arg1 completion:(id)arg2 ;
-(void)moveObject:(id)arg0 toIndex:(NSInteger)arg1 completion:(id)arg2 ;
-(void)moveObjectToBack:(id)arg0 completion:(id)arg1 ;
-(void)moveObjectToFront:(id)arg0 completion:(id)arg1 ;
-(void)processContents;
// -(void)processContentsUsingBlock:(id)arg0 completion:(unk)arg1  ;
-(void)processContentsWithCompletion:(id)arg0 ;
-(void)queryContentsDidChange:(id)arg0 contentsVersion:(NSUInteger)arg1 ;
-(void)queryContentsDidLoad:(id)arg0 contentsVersion:(NSUInteger)arg1 ;
-(void)removeObject:(id)arg0 completion:(id)arg1 ;
-(void)removeObjects:(id)arg0 completion:(id)arg1 ;


@end


#endif