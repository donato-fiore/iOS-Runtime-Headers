// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXFOCUSMANAGER_H
#define AXFOCUSMANAGER_H

@class AXElement, NSHashTable, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXFocusManager : NSObject

@property (readonly, nonatomic) AXElement *currentApplication;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *movementQueue; // ivar: _movementQueue
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (nonatomic) os_unfair_lock_s observersLock; // ivar: _observersLock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observersQueue; // ivar: _observersQueue
@property (nonatomic) int pidForSuccessfulTypeaheadMovement; // ivar: _pidForSuccessfulTypeaheadMovement
@property (retain, nonatomic) NSString *typeaheadString; // ivar: _typeaheadString


-(BOOL)_focusOnApplicationWithPID:(int)arg0 ;
-(BOOL)_moveFocusInApplication:(id)arg0 withHeading:(NSUInteger)arg1 queryString:(id)arg2 ;
-(BOOL)_moveFocusInRemoteElement:(id)arg0 withHeading:(NSUInteger)arg1 byGroup:(BOOL)arg2 ;
-(BOOL)_moveFocusWithHeading:(NSUInteger)arg0 byGroup:(BOOL)arg1 shouldWrap:(BOOL)arg2 ;
-(BOOL)_recursiveMoveFocusInApplication:(id)arg0 withHeading:(NSUInteger)arg1 byGroup:(BOOL)arg2 ;
-(BOOL)_recursiveMoveFocusInApplication:(id)arg0 withHeading:(NSUInteger)arg1 queryString:(id)arg2 ;
-(NSUInteger)_indexOfTypeaheadPIDInApplications:(id)arg0 ;
-(id)_moveApplicationFocusInDirection:(NSInteger)arg0 ;
-(id)currentElement;
-(id)init;
-(void)_enumerateObservers:(id)arg0 ;
-(void)_handleFailedFocusMovementWithHeading:(NSUInteger)arg0 byGroup:(BOOL)arg1 ;
-(void)_moveFocusWithHeading:(NSUInteger)arg0 byGroup:(BOOL)arg1 queryString:(id)arg2 shouldWrap:(BOOL)arg3 ;
-(void)_moveToElementWithHeading:(NSUInteger)arg0 queryString:(id)arg1 ;
-(void)_verifyPIDForTypeahead;
-(void)addObserver:(id)arg0 ;
-(void)focusOnApplicationForTypeahead;
-(void)moveFocusInsideForward:(BOOL)arg0 ;
-(void)moveFocusInsideForward:(BOOL)arg0 shouldWrap:(BOOL)arg1 ;
-(void)moveFocusWithHeading:(NSUInteger)arg0 byGroup:(BOOL)arg1 ;
-(void)moveFocusWithHeading:(NSUInteger)arg0 queryString:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif