// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFORIENTATIONSETTINGSCLIENT_H
#define WFORIENTATIONSETTINGSCLIENT_H

@class NSString, AXSpringBoardServer;
@protocol WFBooleanStateSetting;


#import "WFSettingsClient.h"

@interface WFOrientationSettingsClient : WFSettingsClient <WFBooleanStateSetting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AXSpringBoardServer *server; // ivar: _server
@property (readonly) Class superclass;


+(void)createClientWithCompletionHandler:(id)arg0 ;
-(id)initWithSpringBoardServer:(id)arg0 ;
-(void)getStateWithCompletionHandler:(id)arg0 ;
-(void)setState:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif