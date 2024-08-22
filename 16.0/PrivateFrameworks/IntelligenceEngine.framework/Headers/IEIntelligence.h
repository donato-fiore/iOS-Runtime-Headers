// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IEINTELLIGENCE_H
#define IEINTELLIGENCE_H


#import <Foundation/Foundation.h>


@interface IEIntelligence : NSObject

@property (nonatomic) *Intelligence mIntelligence; // ivar: mIntelligence


-(BOOL)isActive;
-(BOOL)load:(id)arg0 ;
-(BOOL)load:(id)arg0 withId:(id)arg1 ;
-(BOOL)setVariable:(id)arg0 withValue:(id)arg1 ;
-(BOOL)willHandleIntent:(id)arg0 ;
-(id)activeIntents;
-(id)activeLocalIntents;
-(id)find:(id)arg0 withId:(id)arg1 ;
-(id)getActiveIntentsWithScope:(int)arg0 ;
-(id)getBuildVersion;
-(id)getConditions;
-(id)getFormatVersion;
-(id)getRemainingResponses;
-(id)getVariables;
-(id)goTo:(id)arg0 ;
-(id)init;
-(id)processActivity:(id)arg0 ;
-(id)processIntent:(id)arg0 ;
-(id)startConversation;
-(void)dealloc;


@end


#endif