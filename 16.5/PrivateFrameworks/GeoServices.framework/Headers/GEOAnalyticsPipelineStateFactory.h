// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOANALYTICSPIPELINESTATEFACTORY_H
#define GEOANALYTICSPIPELINESTATEFACTORY_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GEOLogMsgState.h"

@interface GEOAnalyticsPipelineStateFactory : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    GEOLogMsgState *_deviceIdentifierState;
    GEOLogMsgState *_deviceIdentifierInternalState;
    GEOLogMsgState *_applicationIdentifierState;
}


@property (retain) NSString *countryCode; // ivar: _countryCode


+(id)sharedFactory;
-(id)_sessionStateForType:(int)arg0 ;
-(id)curatedCollectionRedacted;
-(id)impressionObject;
-(id)init;
-(id)mapUIShown;
-(id)mapsPlaceIds;
-(id)placeCardRap;
-(id)placeCardReveal;
-(id)searchResults;
-(id)stateForType:(NSInteger)arg0 ;
-(int)_launchActionFromAPLaunchAction:(int)arg0 ;
-(int)_privacyAllowedActionFromActualAction:(int)arg0 ;
-(int)_rapPlaceCardTypeForRawType:(int)arg0 ;
-(int)logMsgStateTypeForType:(NSInteger)arg0 ;
-(void)dealloc;
-(void)deviceCountryChanged:(id)arg0 ;
-(void)sessionStateForType:(int)arg0 callback:(id)arg1 ;
-(void)sessionStateForType:(int)arg0 onQueue:(id)arg1 callback:(id)arg2 ;
-(void)sessionStateForType:(int)arg0 sessionAppId:(id)arg1 onQueue:(id)arg2 callback:(id)arg3 ;


@end


#endif