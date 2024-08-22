// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFAPPEARANCESETTINGSCLIENT_H
#define WFAPPEARANCESETTINGSCLIENT_H

@class NSString, UISUserInterfaceStyleMode;
@protocol WFReversibleBooleanStateSetting;


#import "WFSettingsClient.h"

@interface WFAppearanceSettingsClient : WFSettingsClient <WFReversibleBooleanStateSetting>



@property (readonly, nonatomic) NSInteger currentAppearance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UISUserInterfaceStyleMode *styleMode; // ivar: _styleMode
@property (readonly) Class superclass;


+(id)appearanceStream;
+(id)reversalArbiter;
+(void)createClientWithCompletionHandler:(id)arg0 ;
+(void)getBookmarkForCurrentStateWithCompletionHandler:(id)arg0 ;
+(void)getReversalStateWithBookmark:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithStyleMode:(id)arg0 ;
-(void)getStateWithCompletionHandler:(id)arg0 ;
-(void)setAppearance:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)setState:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif