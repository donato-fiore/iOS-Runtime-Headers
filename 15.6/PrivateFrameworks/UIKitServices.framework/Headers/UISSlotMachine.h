// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISSLOTMACHINE_H
#define UISSLOTMACHINE_H

@class NSMutableDictionary, CAContext, NSSet;
@protocol UISSlotDrawer;

#import <Foundation/Foundation.h>


@interface UISSlotMachine : NSObject {
    id<UISSlotDrawer> *_slotDrawer;
    NSUInteger _options;
    NSMutableDictionary *_cachedContents;
    CAContext *_layerContext;
}


@property (readonly, nonatomic) NSSet *allTags;


-(id)initWithSlotDrawer:(id)arg0 options:(NSUInteger)arg1 ;
-(id)remoteContentForLayerContextWithId:(NSUInteger)arg0 style:(id)arg1 tag:(id)arg2 ;
-(void)removeContentForStyle:(id)arg0 tag:(id)arg1 ;
-(void)removeContentsForTag:(id)arg0 ;


@end


#endif