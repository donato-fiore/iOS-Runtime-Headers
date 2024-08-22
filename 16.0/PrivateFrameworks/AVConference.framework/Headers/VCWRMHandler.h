// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCWRMHANDLER_H
#define VCWRMHANDLER_H


#import <Foundation/Foundation.h>


@interface VCWRMHandler : NSObject {
    CGFloat _lastConnectionUnstableTime;
    CGFloat _WRMNotificationRequestTime;
}


@property (readonly) BOOL isRemoteDuplicating; // ivar: _isRemoteDuplicating
@property CGFloat localLinkTypeSuggestionChangeTime; // ivar: _localLinkTypeSuggestionChangeTime
@property (readonly) int localWRMLinkTypeSuggestion; // ivar: _localWRMLinkTypeSuggestion
@property (readonly) int remoteWRMLinkTypeSuggestion; // ivar: _remoteWRMLinkTypeSuggestion


-(BOOL)shouldForceWRMRecommendationUsingUserDefaults;
-(BOOL)shouldRequestWRMNotificationWithDuplicationReason:(unsigned char)arg0 isDuplicationEnabled:(BOOL)arg1 isLocalUsingCellular:(BOOL)arg2 atTime:(CGFloat)arg3 ;
-(id)init;
-(unsigned char)processLocalWRMNotification:(struct ? *)arg0 isAudioOnly:(BOOL)arg1 ;
-(unsigned char)processRemoteWRMSuggestion:(int)arg0 isRemoteDuplicating:(BOOL)arg1 ;
-(void)updateWRMNotificationRequestTime:(CGFloat)arg0 ;


@end


#endif