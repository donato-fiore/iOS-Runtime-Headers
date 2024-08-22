// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFALWAYSONDISPLAYSETTINGSCLIENT_H
#define WFALWAYSONDISPLAYSETTINGSCLIENT_H

@class NSString;
@protocol WFReversibleBooleanStateSetting;


#import "WFSettingsClient.h"

@interface WFAlwaysOnDisplaySettingsClient : WFSettingsClient <WFReversibleBooleanStateSetting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canRunIntent;
+(id)alwaysOnPublisher;
+(id)filteredPublisherForAlwaysOnPublisher:(id)arg0 ;
+(id)reversalArbiter;
+(id)reverseAlwaysOnPublisher;
+(void)createClientWithCompletionHandler:(id)arg0 ;
+(void)getBookmarkForCurrentStateWithCompletionHandler:(id)arg0 ;
+(void)getReversalStateWithBookmark:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)alwaysOnDisplayState;
-(void)getStateWithCompletionHandler:(id)arg0 ;
-(void)setState:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif