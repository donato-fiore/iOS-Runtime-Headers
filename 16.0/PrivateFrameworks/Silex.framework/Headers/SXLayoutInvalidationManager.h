// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXLAYOUTINVALIDATIONMANAGER_H
#define SXLAYOUTINVALIDATIONMANAGER_H

@class NSString, NSMutableDictionary, NSMutableArray;
@protocol SXLayoutInvalidationManager, SXLayoutInvalidationManagerDelegate, SXLayoutBlueprintProvider;

#import <Foundation/Foundation.h>


@interface SXLayoutInvalidationManager : NSObject <SXLayoutInvalidationManager>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SXLayoutInvalidationManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL invalidationDispatched; // ivar: _invalidationDispatched
@property (readonly, nonatomic) NSObject<SXLayoutBlueprintProvider> *layoutBlueprintProvider; // ivar: _layoutBlueprintProvider
@property (retain, nonatomic) NSMutableDictionary *pendingInvalidations; // ivar: _pendingInvalidations
@property (readonly, nonatomic) NSMutableArray *possibleInvalidations; // ivar: _possibleInvalidations
@property (readonly) Class superclass;


-(id)initWithBlueprintProvider:(id)arg0 ;
-(id)invalidateComponent:(id)arg0 ;
// -(id)invalidateComponent:(id)arg0 invalidation:(id)arg1 priority:(unk)arg2  ;
-(id)invalidateComponent:(id)arg0 state:(id)arg1 ;
-(id)invalidateComponent:(id)arg0 state:(id)arg1 priority:(NSUInteger)arg2 ;
-(id)invalidateComponent:(id)arg0 state:(id)arg1 suggestedSize:(struct CGSize )arg2 ;
-(id)invalidateComponent:(id)arg0 state:(id)arg1 suggestedSize:(struct CGSize )arg2 priority:(NSUInteger)arg3 ;
-(id)invalidateComponent:(id)arg0 suggestedSize:(struct CGSize )arg1 ;
-(id)invalidateComponent:(id)arg0 suggestedSize:(struct CGSize )arg1 priority:(NSUInteger)arg2 ;
-(void)cancelPendingInvalidationForComponent:(id)arg0 ;
-(void)invalidateQueuedComponents;
-(void)mightInvalidateComponent:(id)arg0 ;


@end


#endif