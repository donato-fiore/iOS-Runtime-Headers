// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNSUGGESTIONSLOGGER_H
#define VNSUGGESTIONSLOGGER_H



#import "VNClusteringLogger.h"

@interface VNSuggestionsLogger : VNClusteringLogger



-(id)initWithOptions:(id)arg0 logEnabled:(BOOL)arg1 ;
-(void)logAllSuggestons:(id)arg0 ;
-(void)logConnectedGroups:(id)arg0 ;
-(void)logFilteredByInputQuerySuggestons:(id)arg0 ;
-(void)logFinalSuggestionsList:(id)arg0 ;
-(void)logInputFaceIdsWithFlags:(id)arg0 ;
-(void)logString:(id)arg0 ;
-(void)logSuggestons:(id)arg0 description:(id)arg1 ;


@end


#endif