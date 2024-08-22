// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIACTIONLOCATIONPROMPT_H
#define VUIACTIONLOCATIONPROMPT_H

@class NSDictionary;


#import "VUIAction.h"

@interface VUIActionLocationPrompt : VUIAction

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSDictionary *dialogMetrics; // ivar: _dialogMetrics
@property (nonatomic) BOOL geoLocationEnforced; // ivar: _geoLocationEnforced


-(id)initWithContextData:(id)arg0 ;
-(void)_locationAuthorizationStatusDidChange:(id)arg0 ;
-(void)performWithTargetResponder:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif