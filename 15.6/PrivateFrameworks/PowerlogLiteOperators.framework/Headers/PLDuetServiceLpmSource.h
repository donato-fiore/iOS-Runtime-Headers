// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLDUETSERVICELPMSOURCE_H
#define PLDUETSERVICELPMSOURCE_H

@class PLService, PLXPCListenerOperatorComposition;

#import <Foundation/Foundation.h>


@interface PLDuetServiceLpmSource : NSObject

@property (weak) PLService *duetService; // ivar: _duetService
@property (retain) PLXPCListenerOperatorComposition *lpmDisabledXPCListener; // ivar: _lpmDisabledXPCListener
@property (retain) PLXPCListenerOperatorComposition *lpmEnabledXPCListener; // ivar: _lpmEnabledXPCListener


+(id)entryEventForwardDefinitionLpmSourceInformation;
-(id)init;
-(void)didReceiveLpmSourceInfoWithPayload:(id)arg0 withFlag:(short)arg1 ;
-(void)initOperatorDependanciesLpmSource:(id)arg0 ;
-(void)stopService;


@end


#endif