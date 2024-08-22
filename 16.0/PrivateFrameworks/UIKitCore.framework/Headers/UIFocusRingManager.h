// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIFOCUSRINGMANAGER_H
#define UIFOCUSRINGMANAGER_H

@class NSString, NSMutableDictionary;
@protocol _UIGeometryChangeObserver;

#import <Foundation/Foundation.h>


@interface UIFocusRingManager : NSObject <_UIGeometryChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *focusRingStateForClient; // ivar: _focusRingStateForClient
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)focusRingAvailable;
+(Class)shapeLayerClassForItem:(id)arg0 client:(id)arg1 ;
+(id)_currentFocusItemForClient:(id)arg0 ;
+(id)manager;
+(void)_removeActiveFocusLayers;
+(void)_updateActiveFocusLayers;
+(void)moveRingToFocusItem:(id)arg0 ;
+(void)moveRingToFocusItem:(id)arg0 forClient:(id)arg1 ;
+(void)removeRingFromFocusItem:(id)arg0 ;
+(void)removeRingFromFocusItem:(id)arg0 forClient:(id)arg1 ;
+(void)updateRingForFocusItem:(id)arg0 ;
+(void)updateRingForFocusItem:(id)arg0 forClient:(id)arg1 ;
-(BOOL)_focusItemWantsFocusRing:(id)arg0 forClient:(id)arg1 ;
-(NSInteger)_insertionIndexOfFocusLayerForFocusItem:(id)arg0 ;
-(id)_focusRingPathForItem:(id)arg0 inView:(id)arg1 ;
-(id)_viewToAddFocusLayerForItem:(id)arg0 forClient:(id)arg1 ;
-(id)activeFocusLayersForClient:(id)arg0 ;
-(id)activeFocusLayersToItemsForClient:(id)arg0 ;
-(void)_addFocusLayer:(id)arg0 toView:(id)arg1 forItem:(id)arg2 ;
-(void)_geometryChanged:(struct ? *)arg0 forAncestor:(id)arg1 ;
-(void)_removeActiveFocusLayersForClient:(id)arg0 ;
-(void)_updateFocusLayerFrames;
-(void)addFocusRingForItem:(id)arg0 forClient:(id)arg1 ;
-(void)addParentFocusRingForItem:(id)arg0 forClient:(id)arg1 ;
-(void)addSelectedFocusRingForItem:(id)arg0 forClient:(id)arg1 ;
-(void)addSelectedParentFocusRingForItem:(id)arg0 forClient:(id)arg1 ;


@end


#endif