// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDMUSERPARSER_H
#define MDMUSERPARSER_H



#import "MDMParser.h"

@interface MDMUserParser : MDMParser



-(id)_allCommands;
-(id)_allSettingsItems;
-(id)_allowedDeviceQueriesForAccessRights:(NSUInteger)arg0 ;
-(id)_declarativeManagement:(id)arg0 ;
-(id)_installProfile:(id)arg0 accessRights:(NSUInteger)arg1 ;
-(id)_originator;
-(id)_profileList:(id)arg0 ;
-(id)_removeProfile:(id)arg0 ;
-(id)_restrictions:(id)arg0 ;
-(void)_performQuery:(id)arg0 withResultDictionary:(id)arg1 ;
-(void)_sendAnalyticsMDMCommandEventWithRequest:(id)arg0 response:(id)arg1 ;


@end


#endif