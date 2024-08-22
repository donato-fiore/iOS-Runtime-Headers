// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCOMPOSEDROPTARGET_H
#define CNCOMPOSEDROPTARGET_H

@class NSSet, NSString, UIDropInteraction, UIView;
@protocol UIDropInteractionDelegate_Private, CNComposeDropTargetDelegate;

#import <Foundation/Foundation.h>


@interface CNComposeDropTarget : NSObject <UIDropInteractionDelegate_Private>

 {
    ? _delegateFlags;
}


@property (copy, nonatomic) NSSet *acceptableUTIs; // ivar: _acceptableUTIs
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNComposeDropTargetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDropInteraction *dropInteraction; // ivar: _dropInteraction
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *targetView; // ivar: _targetView


+(id)os_log;
-(BOOL)_delegateCanDropItemsWithDropSession:(id)arg0 ;
-(BOOL)_sessionContainsOnlyAcceptableTypeIdentifiers:(id)arg0 ;
-(BOOL)canLoadContactObjectsFromSession:(id)arg0 ;
-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(BOOL)handlesDroppedContacts;
-(BOOL)shouldHandleContactItemsFromSession:(id)arg0 ;
-(NSInteger)_dropInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(NSUInteger)composeAddressKind:(NSUInteger)arg0 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)emailRecipientForContact:(id)arg0 ;
-(id)initWithView:(id)arg0 delegate:(id)arg1 ;
-(id)unifiedEmailRecipientForContact:(id)arg0 ;
-(void)_delegateDidDropItemsWithDropSession:(id)arg0 ;
-(void)_dropSessionEnded;
-(void)_updateDelegateFlags;
-(void)addContactItemsToTargetViewFromSession:(id)arg0 ;
-(void)addDroppedContacts:(id)arg0 toTargetView:(id)arg1 forSession:(id)arg2 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnd:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnter:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidExit:(id)arg1 ;
-(void)handleDropOfContactItemProviders:(id)arg0 ;


@end


#endif