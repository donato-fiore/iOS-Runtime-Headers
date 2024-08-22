// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDROPSESSIONIMPL_H
#define _UIDROPSESSIONIMPL_H

@class NSArray, NSString, NSProgress;
@protocol UIDropSession, _UIDragDropSessionInternal, _UIDropSessionPrivate, UIDragSession;

#import <Foundation/Foundation.h>

#import "_UIInternalDraggingSessionDestination.h"

@interface _UIDropSessionImpl : NSObject <UIDropSession, _UIDragDropSessionInternal, _UIDropSessionPrivate>

 {
    NSArray *_items;
}


@property (readonly, nonatomic, getter=_allowsItemsToUpdate) BOOL _allowsItemsToUpdate;
@property (readonly, nonatomic) NSInteger _dataOwner;
@property (readonly, nonatomic) BOOL allowsMoveOperation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_drivenByPointer) BOOL drivenByPointer;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSObject<UIDragSession> *localDragSession; // ivar: _localDragSession
@property (readonly, nonatomic, getter=_operationMask) NSUInteger operationMask;
@property (readonly) NSProgress *progress;
@property (nonatomic) NSUInteger progressIndicatorStyle; // ivar: _progressIndicatorStyle
@property (readonly, nonatomic, getter=isRestrictedToDraggingApplication) BOOL restrictedToDraggingApplication;
@property (readonly, nonatomic) _UIInternalDraggingSessionDestination *sessionDestination; // ivar: _sessionDestination
@property (readonly) Class superclass;


-(BOOL)canLoadObjectsOfClass:(Class)arg0 ;
-(BOOL)hasItemsConformingToTypeIdentifiers:(id)arg0 ;
-(id)_createItemsOfClass:(Class)arg0 synchronouslyIfPossible:(BOOL)arg1 completion:(id)arg2 ;
-(id)_internalSession;
-(id)initWithSessionDestination:(id)arg0 ;
-(id)loadObjectsOfClass:(Class)arg0 completion:(id)arg1 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(void)_itemsNeedUpdate:(id)arg0 ;
-(void)requestVisibleItems:(id)arg0 ;


@end


#endif