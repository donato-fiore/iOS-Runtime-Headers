// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSNETWORKREACHABLETRIGGER_H
#define MAPSSUGGESTIONSNETWORKREACHABLETRIGGER_H

@class NSString;
@protocol MapsSuggestionsCondition;


#import "MapsSuggestionsBaseTrigger.h"

@interface MapsSuggestionsNetworkReachableTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsCondition>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)isTrue;
-(id)init;
-(id)objectForJSON;
-(void)_reachabilityChanged;
-(void)didAddFirstObserver;
-(void)didRemoveLastObserver;


@end


#endif