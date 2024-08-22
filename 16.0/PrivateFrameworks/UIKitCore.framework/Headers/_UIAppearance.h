// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIAPPEARANCE_H
#define _UIAPPEARANCE_H

@class NSArray, NSMutableArray, NSMapTable;

#import <Foundation/Foundation.h>

#import "_UIAppearanceCustomizableClassInfo.h"

@interface _UIAppearance : NSObject {
    NSArray *_containerList;
    NSMutableArray *_appearanceInvocations;
    NSMapTable *_invocationSources;
}


@property (readonly, nonatomic) _UIAppearanceCustomizableClassInfo *_customizableClassInfo; // ivar: _customizableClassInfo


+(BOOL)_hasAnyCustomizations;
+(BOOL)_hasCustomizationsForClass:(Class)arg0 guideClass:(Class)arg1 ;
+(id)_appearanceForClass:(Class)arg0 withContainerList:(id)arg1 ;
+(id)_appearanceNodeForClassInfo:(id)arg0 containerList:(id)arg1 ;
+(id)_appearanceWithClassInfo:(id)arg0 containerList:(id)arg1 ;
+(id)_currentAppearanceSource;
+(id)_newAppearanceWithClassInfo:(id)arg0 containerList:(id)arg1 ;
+(id)_pendingRecordInvocationsForSource:(id)arg0 ;
+(id)_recorderForSource:(id)arg0 ;
+(id)_recordersExcludingSource:(id)arg0 withWindow:(id)arg1 ;
+(id)_rootAppearancesNode;
+(id)_windowsForSource:(id)arg0 ;
+(id)appearancesAtNode:(id)arg0 withObject:(id)arg1 ;
+(id)recursiveDescription;
+(void)_addWindow:(id)arg0 forSource:(id)arg1 ;
+(void)_appendDescriptionOfNode:(id)arg0 toString:(id)arg1 atLevel:(NSUInteger)arg2 ;
+(void)_applyInvocationsTo:(id)arg0 window:(id)arg1 ;
+(void)_applyInvocationsTo:(id)arg0 window:(id)arg1 matchingSelector:(SEL)arg2 ;
+(void)_applyInvocationsTo:(id)arg0 window:(id)arg1 matchingSelector:(SEL)arg2 onlySystemInvocations:(BOOL)arg3 ;
+(void)_removeInvocationsForSource:(id)arg0 ;
+(void)_removeWindow:(id)arg0 forSource:(id)arg1 ;
+(void)_setCurrentAppearanceSource:(id)arg0 ;
+(void)_setInvalidatesViewsOnAppearanceChange:(BOOL)arg0 ;
-(BOOL)_isRecordingInvocations;
-(BOOL)_isValidAppearanceForCustomizableObject:(id)arg0 ;
-(SEL)_beginListeningForAppearanceEventsForSetter:(SEL)arg0 ;
-(id)_appearanceInvocations;
-(id)_traitCollection;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)_appendDescriptionToString:(id)arg0 atLevel:(NSUInteger)arg1 ;
-(void)_handleGetterInvocation:(id)arg0 ;
-(void)_handleSetterInvocation:(id)arg0 ;
-(void)_invalidateAppearanceInWindow:(id)arg0 ;
-(void)_removeInvocationsForSource:(id)arg0 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif