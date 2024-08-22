// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODEANCHORMODELSUGGESTIONCLIENT_H
#define ATXMODEANCHORMODELSUGGESTIONCLIENT_H

@class _PASXPCClientHelper;
@protocol ATXModeAnchorModelSuggestionClientXPCInterface;

#import <Foundation/Foundation.h>


@interface ATXModeAnchorModelSuggestionClient : NSObject <ATXModeAnchorModelSuggestionClientXPCInterface>

 {
    _PASXPCClientHelper *_xpcClientHelper;
}




+(id)sharedInstance;
-(id)_init;
-(id)init;
-(void)_pingServer;
-(void)anchorModelDidProvideModeSuggestions:(id)arg0 ;
-(void)fetchCombinedSuggestionScoreAndFlagsForModeWithUUID:(id)arg0 modeType:(NSUInteger)arg1 origin:(NSInteger)arg2 originBundleId:(id)arg3 originAnchorType:(id)arg4 confidenceScore:(CGFloat)arg5 secondsSinceSuggested:(CGFloat)arg6 serializedTriggers:(id)arg7 completionHandler:(id)arg8 ;
-(void)fetchCombinedSuggestionScoreForModeWithUUID:(id)arg0 modeType:(NSUInteger)arg1 origin:(NSInteger)arg2 originBundleId:(id)arg3 originAnchorType:(id)arg4 confidenceScore:(CGFloat)arg5 secondsSinceSuggested:(CGFloat)arg6 serializedTriggers:(id)arg7 completionHandler:(id)arg8 ;


@end


#endif