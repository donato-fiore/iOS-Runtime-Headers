// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFLOWPOWERMODESETTINGSCLIENT_H
#define WFLOWPOWERMODESETTINGSCLIENT_H

@class NSString, _PMLowPowerMode;
@protocol WFReversibleBooleanStateSetting;


#import "WFSettingsClient.h"

@interface WFLowPowerModeSettingsClient : WFSettingsClient <WFReversibleBooleanStateSetting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _PMLowPowerMode *lowPowerMode; // ivar: _lowPowerMode
@property (readonly) Class superclass;


+(id)energyModeStream;
+(id)reversalArbiter;
+(void)createClientWithCompletionHandler:(id)arg0 ;
+(void)getBookmarkForCurrentStateWithCompletionHandler:(id)arg0 ;
+(void)getReversalStateWithBookmark:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithLowPowerMode:(id)arg0 ;
-(void)getStateWithCompletionHandler:(id)arg0 ;
-(void)setState:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif