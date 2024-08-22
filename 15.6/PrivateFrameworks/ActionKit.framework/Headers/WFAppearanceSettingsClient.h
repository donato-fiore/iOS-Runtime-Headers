// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFAPPEARANCESETTINGSCLIENT_H
#define WFAPPEARANCESETTINGSCLIENT_H

@class NSString, UISUserInterfaceStyleMode;
@protocol WFBooleanStateSetting;


#import "WFSettingsClient.h"

@interface WFAppearanceSettingsClient : WFSettingsClient <WFBooleanStateSetting>



@property (readonly, nonatomic) NSInteger currentAppearance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UISUserInterfaceStyleMode *styleMode; // ivar: _styleMode
@property (readonly) Class superclass;


+(void)createClientWithCompletionHandler:(id)arg0 ;
-(id)initWithStyleMode:(id)arg0 ;
-(void)getStateWithCompletionHandler:(id)arg0 ;
-(void)setAppearance:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)setState:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif