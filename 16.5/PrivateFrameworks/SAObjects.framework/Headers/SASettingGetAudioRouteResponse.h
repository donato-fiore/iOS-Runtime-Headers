// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASETTINGGETAUDIOROUTERESPONSE_H
#define SASETTINGGETAUDIOROUTERESPONSE_H



#import "SASettingResponse.h"
#import "SASettingAudioRoute.h"

@interface SASettingGetAudioRouteResponse : SASettingResponse

@property (retain, nonatomic) SASettingAudioRoute *audioRoute;


+(id)getAudioRouteResponse;
+(id)getAudioRouteResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif