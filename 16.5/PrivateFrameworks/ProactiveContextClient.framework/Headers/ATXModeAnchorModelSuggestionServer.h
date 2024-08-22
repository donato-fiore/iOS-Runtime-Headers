// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODEANCHORMODELSUGGESTIONSERVER_H
#define ATXMODEANCHORMODELSUGGESTIONSERVER_H

@class NSXPCListener, _PASLock, NSString;
@protocol NSXPCListenerDelegate, ATXModeAnchorModelSuggestionServerXPCInterface, ATXModeAnchorModelSuggestionClientXPCInterface, ATXModeClassifierClientModel, ATXModeClassifierClientModelDelegate;

#import <Foundation/Foundation.h>

#import "ATXConfiguredModeService.h"

@interface ATXModeAnchorModelSuggestionServer : NSObject <NSXPCListenerDelegate, ATXModeAnchorModelSuggestionServerXPCInterface, ATXModeAnchorModelSuggestionClientXPCInterface, ATXModeClassifierClientModel>

 {
    NSXPCListener *_xpcListener;
    _PASLock *_lock;
    ATXConfiguredModeService *_modeService;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATXModeClassifierClientModelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldUpdateHighestConfidenceSuggestion:(id)arg0 newSuggestion:(id)arg1 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(id)initWithConfiguredModeService:(id)arg0 ;
-(id)initWithXPCListener:(id)arg0 configuredModeService:(id)arg1 ;
-(void)anchorModelDidProvideModeSuggestions:(id)arg0 ;
-(void)dealloc;
-(void)fetchCombinedSuggestionScoreAndFlagsForModeWithUUID:(id)arg0 modeType:(NSUInteger)arg1 origin:(NSInteger)arg2 originBundleId:(id)arg3 originAnchorType:(id)arg4 confidenceScore:(CGFloat)arg5 secondsSinceSuggested:(CGFloat)arg6 serializedTriggers:(id)arg7 completionHandler:(id)arg8 ;
-(void)fetchCombinedSuggestionScoreForModeEvent:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchCombinedSuggestionScoreForModeWithUUID:(id)arg0 modeType:(NSUInteger)arg1 origin:(NSInteger)arg2 originBundleId:(id)arg3 originAnchorType:(id)arg4 confidenceScore:(CGFloat)arg5 secondsSinceSuggested:(CGFloat)arg6 serializedTriggers:(id)arg7 completionHandler:(id)arg8 ;
-(void)pingWithCompletion:(id)arg0 ;


@end


#endif