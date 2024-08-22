// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AACAWARDSCLIENT_H
#define AACAWARDSCLIENT_H


#import <Foundation/Foundation.h>

#import "AACXPCClient.h"

@interface AACAwardsClient : NSObject

@property (retain, nonatomic) AACXPCClient *client; // ivar: _client


-(id)allAchievementsWithError:(*id)arg0 ;
-(id)ephemeralAchievementWithTemplateUniqueName:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)addEarnedInstances:(id)arg0 completion:(id)arg1 ;
-(void)addTemplates:(id)arg0 completion:(id)arg1 ;
-(void)allAchievementsWithCompletion:(id)arg0 ;
-(void)removeEarnedInstances:(id)arg0 completion:(id)arg1 ;
-(void)removeTemplates:(id)arg0 completion:(id)arg1 ;
-(void)removeTemplatesForSource:(id)arg0 completion:(id)arg1 ;
-(void)removeTemplatesWithUniqueNames:(id)arg0 completion:(id)arg1 ;
-(void)requestAwardingWithTriggers:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)scheduleAwardingWithCompletion:(id)arg0 ;
-(void)templatesForSource:(id)arg0 completion:(id)arg1 ;


@end


#endif