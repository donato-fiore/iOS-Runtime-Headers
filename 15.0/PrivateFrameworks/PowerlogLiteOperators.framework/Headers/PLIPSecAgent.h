// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLIPSECAGENT_H
#define PLIPSECAGENT_H

@class PLAgent;



@interface PLIPSecAgent : PLAgent

@property (nonatomic) int ipsecSocket; // ivar: _ipsecSocket


+(id)entryEventPointDefinitionIPSecWake;
+(id)entryEventPointDefinitions;
+(void)load;
-(void)initIPSecKEvent;
-(void)initOperatorDependancies;
-(void)logEventPointIPSecWake;


@end


#endif