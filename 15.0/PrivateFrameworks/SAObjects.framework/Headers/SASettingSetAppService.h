// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASETTINGSETAPPSERVICE_H
#define SASETTINGSETAPPSERVICE_H

@class NSString, NSArray;
@protocol SASettingAppSettingCommand;


#import "SASettingSetBool.h"

@interface SASettingSetAppService : SASettingSetBool <SASettingAppSettingCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appWithSettingsId;
@property (copy, nonatomic) NSArray *callbacks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)setAppService;
+(id)setAppServiceWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif