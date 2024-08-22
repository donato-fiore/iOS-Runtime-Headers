// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSMESSAGESPINNINGSUGGESTER_H
#define _PSMESSAGESPINNINGSUGGESTER_H

@class NSXPCConnection, NSString, _CDInteractionStore, NSDictionary;

#import <Foundation/Foundation.h>


@interface _PSMessagesPinningSuggester : NSObject {
    os_unfair_lock_s _lock;
    NSXPCConnection *_connection;
}


@property (nonatomic) BOOL boostGroups; // ivar: _boostGroups
@property (nonatomic) BOOL boostIndividualFavorites; // ivar: _boostIndividualFavorites
@property (retain, nonatomic) NSString *configVersion; // ivar: _configVersion
@property (nonatomic) CGFloat intensityThreshold; // ivar: _intensityThreshold
@property (nonatomic) CGFloat intensityWeight; // ivar: _intensityWeight
@property (retain, nonatomic) _CDInteractionStore *interactionStore; // ivar: _interactionStore
@property (nonatomic) CGFloat lookbackWindow; // ivar: _lookbackWindow
@property (nonatomic) NSInteger minimalInteractions; // ivar: _minimalInteractions
@property (nonatomic) NSInteger minimalUniqueDaysInteracted; // ivar: _minimalUniqueDaysInteracted
@property (nonatomic) BOOL outgoingOnly; // ivar: _outgoingOnly
@property (retain) NSDictionary *psMessagesPinningConfig; // ivar: _psMessagesPinningConfig
@property (nonatomic) CGFloat regularityThreshold; // ivar: _regularityThreshold
@property (nonatomic) CGFloat regularityWeight; // ivar: _regularityWeight


-(BOOL)loadPSConfig:(id)arg0 ;
-(id)chatGuidsBasedOnRegularityAndIntensityWithMaxSuggestions:(NSInteger)arg0 referenceDate:(id)arg1 minimumDaysOfHistory:(NSInteger)arg2 maxInteractionsForQuery:(NSInteger)arg3 ;
-(id)chatGuidsForMessagesPinningWithMaxSuggestions:(NSInteger)arg0 ;
-(id)chatGuidsForPinningHeuristicApproachWithMaxSuggestions:(NSInteger)arg0 forReferenceDate:(id)arg1 ;
-(id)getPayloadOfFeedback:(id)arg0 ;
-(id)init;
-(id)initWithRegularityThreshold:(CGFloat)arg0 intensityThreshold:(CGFloat)arg1 regularityWeight:(CGFloat)arg2 intensityWeight:(CGFloat)arg3 minimalInteration:(NSInteger)arg4 minimalUniqueDaysInteracted:(NSInteger)arg5 interactionStore:(id)arg6 lookbackWindow:(CGFloat)arg7 ;
-(id)initWithRegularityThreshold:(CGFloat)arg0 intensityThreshold:(CGFloat)arg1 regularityWeight:(CGFloat)arg2 intensityWeight:(CGFloat)arg3 minimalInteration:(NSInteger)arg4 minimalUniqueDaysInteracted:(NSInteger)arg5 interactionStore:(id)arg6 lookbackWindow:(CGFloat)arg7 outgoingOnly:(BOOL)arg8 ;
-(void)provideMessagesPinningFeedback:(id)arg0 ;
-(void)submitMessagesPinningFeedback:(id)arg0 ;
-(void)updateModelProperties:(id)arg0 ;


@end


#endif