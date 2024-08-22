// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASETTINGAUDIOROUTE_H
#define SASETTINGAUDIOROUTE_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SASettingAudioRoute : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *audioRouteType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)audioRoute;
+(id)audioRouteWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif