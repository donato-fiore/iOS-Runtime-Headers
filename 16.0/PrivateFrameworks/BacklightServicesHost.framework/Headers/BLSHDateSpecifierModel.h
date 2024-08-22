// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHDATESPECIFIERMODEL_H
#define BLSHDATESPECIFIERMODEL_H

@class NSMapTable;
@protocol BLSHInactiveBudgetPolicing_Private;

#import <Foundation/Foundation.h>


@interface BLSHDateSpecifierModel : NSObject {
    id<BLSHInactiveBudgetPolicing_Private> *_inactiveBudgetPolicy;
    NSMapTable *_environmentModels;
    os_unfair_lock_s _lock;
}




-(BOOL)missingAnySpecifiersInDateInterval:(id)arg0 forPresentation:(id)arg1 ;
-(id)initWithInactiveBudgetPolicy:(id)arg0 ;
-(id)missingIntervalsForMinimumInterval:(id)arg0 requestInterval:(id)arg1 ofPresentation:(id)arg2 ;
-(id)updatesAfterSpecifier:(id)arg0 coalesceFirstUpdateToNowDate:(id)arg1 plusRenderEarlyEpsilon:(CGFloat)arg2 untilGapOverDuration:(CGFloat)arg3 coaelscingEpsilon:(CGFloat)arg4 maximumUpdates:(NSInteger)arg5 lastValidDate:(id)arg6 forPresentation:(id)arg7 environmentFilter:(id)arg8 ;
-(void)clearSpecifiersForEnvironment:(id)arg0 ;
-(void)purgeSpecifiersBefore:(id)arg0 ;
-(void)registerSpecifiers:(id)arg0 forDateInterval:(id)arg1 environment:(id)arg2 ;


@end


#endif