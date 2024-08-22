// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSASSISTANTPREFERENCES_H
#define MSASSISTANTPREFERENCES_H

@class AFMultiUserConnection;

#import <Foundation/Foundation.h>


@interface MSAssistantPreferences : NSObject

@property (retain, nonatomic) AFMultiUserConnection *connection; // ivar: _connection


+(BOOL)isMultiUserEnabledForSiri;
+(id)intentExamples;
+(id)sharedPreferences;
+(id)supportedMediaIntents;
-(id)init;
-(void)getHomeUserIDForSpeaker:(id)arg0 completion:(id)arg1 ;
-(void)getSharedUserIDForHomeUser:(id)arg0 completion:(id)arg1 ;


@end


#endif