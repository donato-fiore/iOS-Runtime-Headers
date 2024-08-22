// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RETRAININGCONTEXT_H
#define RETRAININGCONTEXT_H

@protocol RETrainingSimulationCoordinator;

#import <Foundation/Foundation.h>

#import "RERelevanceEngine.h"
#import "REConcurrentDictionary.h"
#import "RERemoteTrainingContext.h"
#import "RETrainingContext.h"

@interface RETrainingContext : NSObject <RETrainingSimulationCoordinator>

 {
    RERelevanceEngine *_relevanceEngine;
    REConcurrentDictionary *_attributes;
    RERemoteTrainingContext *_remoteContext;
}


@property (readonly, nonatomic) BOOL _wantsAutomaticRemoteContextForwarding;
@property (readonly, nonatomic) RETrainingContext *attributeContext;
@property (retain) RETrainingContext *cachedAttributeContext; // ivar: _cachedAttributeContext
@property (readonly, nonatomic) BOOL isCurrent;
@property (readonly, nonatomic) RERelevanceEngine *relevanceEngine;
@property (retain, nonatomic) RERemoteTrainingContext *remoteContext;


-(BOOL)performSimulationCommand:(id)arg0 withOptions:(id)arg1 ;
-(id)attributeForKey:(id)arg0 ;
-(id)init;
-(void)_configureForRelevanceEngine:(id)arg0 ;
-(void)_didBecomeCurrent;
-(void)_didResignCurrent;
-(void)_trainElement:(id)arg0 isPositiveEvent:(BOOL)arg1 interaction:(id)arg2 ;
-(void)_trainElementWithIdentifier:(id)arg0 isPositiveEvent:(BOOL)arg1 interaction:(id)arg2 ;
-(void)_willBecomeCurrent;
-(void)_willResignCurrent;
-(void)becomeCurrent;
-(void)dealloc;
-(void)flushTraining;
-(void)setAttribute:(id)arg0 forKey:(id)arg1 ;
-(void)trainWithElement:(id)arg0 isPositiveEvent:(BOOL)arg1 interaction:(id)arg2 ;
-(void)trainWithUnmanagedElement:(id)arg0 isPositiveEvent:(BOOL)arg1 interaction:(id)arg2 ;


@end


#endif