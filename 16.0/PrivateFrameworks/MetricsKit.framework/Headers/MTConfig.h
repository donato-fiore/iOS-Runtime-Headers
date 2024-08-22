// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTCONFIG_H
#define MTCONFIG_H

@class NSDictionary;
@protocol MTConfigDelegate;


#import "MTObject.h"

@interface MTConfig : MTObject

@property (retain, nonatomic) NSDictionary *debugSource; // ivar: _debugSource
@property (weak, nonatomic) NSObject<MTConfigDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger eventDataTimeout; // ivar: _eventDataTimeout


-(BOOL)_isEventDataTimeoutUnset;
-(BOOL)disabledForSources:(id)arg0 ;
-(BOOL)metricsDisabledOrBlacklistedEvent:(id)arg0 sources:(id)arg1 ;
-(BOOL)metricsDisabledOrDenylistedEvent:(id)arg0 sources:(id)arg1 ;
-(id)blacklistedEventsForSources:(id)arg0 ;
-(id)blacklistedFieldsForSources:(id)arg0 ;
-(id)computeWithConfigSources:(id)arg0 ;
-(id)configValueForKeyPath:(id)arg0 default:(id)arg1 ;
-(id)configValueForKeyPath:(id)arg0 sources:(id)arg1 ;
-(id)deResFieldsForSources:(id)arg0 ;
-(id)denylistedEventsForSources:(id)arg0 ;
-(id)denylistedFieldsForSources:(id)arg0 ;
-(id)injectedSource;
-(id)sources;
-(void)applyDeRes:(id)arg0 sources:(id)arg1 ;
-(void)removeBlacklistedFields:(id)arg0 sources:(id)arg1 ;
-(void)removeDenylistedFields:(id)arg0 sources:(id)arg1 ;


@end


#endif