// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNUISESSIONCONTROLLER_H
#define SNUISESSIONCONTROLLER_H

@class NSMapTable;

#import <Foundation/Foundation.h>

#import "_TtC17SessionUIServices17SessionController.h"

@interface SNUISessionController : NSObject

@property (readonly, nonatomic) BOOL isSessionEnabled;
@property (retain, nonatomic) _TtC17SessionUIServices17SessionController *sessionController; // ivar: _sessionController
@property (retain, nonatomic) NSMapTable *sessionProviders; // ivar: _sessionProviders


+(id)sharedInstance;
-(id)init;
-(id)sessionProviderWrapping:(id)arg0 ;
-(id)subscribeToSessionAlertStreamWithHandler:(id)arg0 ;
-(id)subscribeToSessionHostViewControllerProviderStreamWithHandler:(id)arg0 ;
-(void)endSessionForProvider:(id)arg0 ;
-(void)setSystemProvidedMetrics:(id)arg0 ;


@end


#endif