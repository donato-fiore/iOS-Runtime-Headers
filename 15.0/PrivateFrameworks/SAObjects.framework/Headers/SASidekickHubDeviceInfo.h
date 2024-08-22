// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASIDEKICKHUBDEVICEINFO_H
#define SASIDEKICKHUBDEVICEINFO_H

@class NSString;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SASidekickHubDeviceInfo : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *accessoryIdentifier;
@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *hubDeviceType;
@property (copy, nonatomic) NSString *hubUserId;
@property (nonatomic) BOOL mediaPlaybackEnabled;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSString *sidekickBrand;
@property (copy, nonatomic) NSString *sidekickDeviceType;
@property (readonly) Class superclass;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif