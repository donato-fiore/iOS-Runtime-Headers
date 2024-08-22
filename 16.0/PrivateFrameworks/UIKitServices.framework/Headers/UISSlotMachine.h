// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISSLOTMACHINE_H
#define UISSLOTMACHINE_H

@class NSMutableDictionary, CAContext, NSMapTable, NSSet, NSString;
@protocol UISSlotMachineProtocol, UISSlotDrawer;

#import <Foundation/Foundation.h>


@interface UISSlotMachine : NSObject <UISSlotMachineProtocol>

 {
    id<UISSlotDrawer> *_slotDrawer;
    NSUInteger _options;
    os_unfair_lock_s _cachedContentsLock;
    os_unfair_lock_s _layerContextLock;
    os_unfair_lock_s _LRUTagsByClassLock;
    NSMutableDictionary *_cachedContents;
    CAContext *_layerContext;
    NSMapTable *_LRUTagsByClass;
}


@property (readonly, nonatomic) NSSet *allTags;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)allowedLocalizations;
-(id)initWithSlotDrawer:(id)arg0 options:(NSUInteger)arg1 ;
-(id)remoteContentForLayerContextWithId:(NSUInteger)arg0 style:(id)arg1 tag:(id)arg2 ;
-(void)getRemoteContentForLayerContextWithId:(NSUInteger)arg0 style:(id)arg1 tag:(id)arg2 reply:(id)arg3 ;
-(void)removeContentForStyle:(id)arg0 tag:(id)arg1 ;
-(void)removeContentsForTag:(id)arg0 ;


@end


#endif