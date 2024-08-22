// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIFORCEPRESENTATIONHELPER_H
#define UIFORCEPRESENTATIONHELPER_H


#import <Foundation/Foundation.h>


@interface UIForcePresentationHelper : NSObject



+(id)snapshotViewForSourceView:(id)arg0 sourceRect:(struct CGRect )arg1 ;
+(id)visualEffectForPresentationPhase:(NSUInteger)arg0 traitCollection:(id)arg1 variant:(NSInteger)arg2 ;
+(struct CGRect )sourceRectForView:(id)arg0 proposedSourceRect:(struct CGRect )arg1 ;
+(void)applyPhase:(NSUInteger)arg0 toSnapshotView:(id)arg1 ;


@end


#endif