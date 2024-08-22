// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUUUIDSELECTIONMANAGER_H
#define PUUUIDSELECTIONMANAGER_H

@class PXObservable, NSMutableSet, NSString, NSSet;
@protocol _PUOneUpSelectionIndicatorCompatibleManager, PUMutableUUIDSelectionManager;



@interface PUUUIDSelectionManager : PXObservable <_PUOneUpSelectionIndicatorCompatibleManager, PUMutableUUIDSelectionManager>



@property (readonly, copy, nonatomic) NSMutableSet *_mutableSelectedUUIDs; // ivar: __mutableSelectedUUIDs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSSet *selectedUUIDs;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(BOOL)isSelectedUUID:(id)arg0 ;
-(BOOL)pu_isAssetReferenceSelected:(id)arg0 ;
-(id)init;
-(id)initWithSelectedUUIDs:(id)arg0 ;
-(id)mutableChangeObject;
-(void)addSelectedUUID:(id)arg0 ;
-(void)deselectAllUUIDs;
-(void)performChanges:(id)arg0 ;
-(void)pu_registerSelectionIndicatorObserver:(id)arg0 ;
-(void)pu_unregisterSelectionIndicatorObserver:(id)arg0 ;
-(void)removeSelectedUUID:(id)arg0 ;


@end


#endif