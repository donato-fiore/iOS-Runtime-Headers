// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBICONLISTVIEWDRAGGINGDATAPOLICYHANDLER_H
#define SBICONLISTVIEWDRAGGINGDATAPOLICYHANDLER_H

@class NSMapTable, NSString;
@protocol LSOpenResourceOperationDelegate, SBIconListViewDraggingPolicyHandling;

#import <Foundation/Foundation.h>


@interface SBIconListViewDraggingDataPolicyHandler : NSObject <LSOpenResourceOperationDelegate, SBIconListViewDraggingPolicyHandling>

 {
    NSMapTable *_sourceURLsByOperationMapTable;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)allowsSpringLoadForSession:(id)arg0 onIconView:(id)arg1 ;
-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(NSInteger)dragHitRegionForDropSession:(id)arg0 iconListView:(id)arg1 point:(struct CGPoint )arg2 icon:(id)arg3 ;
-(id)_bestSupportedUTIForDragItem:(id)arg0 supportedTypes:(id)arg1 ;
-(id)_currentDraggingIconViewInView:(id)arg0 forLocation:(struct CGPoint )arg1 ;
-(id)init;
-(void)_removeAnySourceURLForOperation:(id)arg0 ;
-(void)handleSpringLoadOnIconView:(id)arg0 ;
-(void)openResourceOperation:(id)arg0 didFailWithError:(id)arg1 ;
-(void)openResourceOperation:(id)arg0 didFinishCopyingResource:(id)arg1 ;


@end


#endif