// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCELLULARDATASETTINGSCLIENT_H
#define WFCELLULARDATASETTINGSCLIENT_H

@class NSString;
@protocol WFBooleanStateSetting;


#import "WFSettingsClient.h"

@interface WFCellularDataSettingsClient : WFSettingsClient <WFBooleanStateSetting>



@property (readonly, nonatomic) *__CTServerConnection connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)createClientWithCompletionHandler:(id)arg0 ;
-(id)initWithServerConnection:(struct __CTServerConnection *)arg0 ;
-(void)dealloc;
-(void)getStateWithCompletionHandler:(id)arg0 ;
-(void)setState:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif