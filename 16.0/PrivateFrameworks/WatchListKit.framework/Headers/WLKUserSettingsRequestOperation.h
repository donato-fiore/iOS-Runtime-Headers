// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKUSERSETTINGSREQUESTOPERATION_H
#define WLKUSERSETTINGSREQUESTOPERATION_H



#import "WLKUTSNetworkRequestOperation.h"
#import "WLKUserSettings.h"

@interface WLKUserSettingsRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) NSUInteger action; // ivar: _action
@property (readonly, nonatomic) WLKUserSettings *response; // ivar: _response
@property (readonly, copy, nonatomic) WLKUserSettings *userSettings; // ivar: _userSettings


-(id)initWithAction:(NSUInteger)arg0 userSettings:(id)arg1 ;
-(void)processResponse;


@end


#endif