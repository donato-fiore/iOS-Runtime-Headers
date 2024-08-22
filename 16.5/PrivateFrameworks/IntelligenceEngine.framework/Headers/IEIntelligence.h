// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IEINTELLIGENCE_H
#define IEINTELLIGENCE_H


#import <Foundation/Foundation.h>


@interface IEIntelligence : NSObject

@property (nonatomic) *void mIntelligence; // ivar: mIntelligence


-(BOOL)hasActiveFallback;
-(BOOL)isActive;
-(BOOL)load:(id)arg0 ;
-(BOOL)load:(id)arg0 withFlowId:(id)arg1 ;
-(BOOL)load:(id)arg0 withId:(id)arg1 ;
-(BOOL)loadFromString:(id)arg0 ;
-(BOOL)setVariable:(id)arg0 withValue:(id)arg1 ;
-(BOOL)willHandleDirectInvocation:(id)arg0 ;
-(BOOL)willHandleEvent:(id)arg0 ;
-(BOOL)willHandleIntent:(id)arg0 ;
-(id)activeEvents;
-(id)activeIntents;
-(id)activeLocalEvents;
-(id)activeLocalIntents;
-(id)find:(id)arg0 withId:(id)arg1 ;
-(id)findInTemplateDir:(id)arg0 withId:(id)arg1 ;
-(id)getActiveEventsWithScope:(int)arg0 ;
-(id)getActiveIntentsWithScope:(int)arg0 ;
-(id)getBuildVersion;
-(id)getConditions;
-(id)getEvents;
-(id)getExitValue;
-(id)getFormatVersion;
-(id)getInputGroup:(id)arg0 ;
-(id)getIntents;
-(id)getRemainingResponses;
-(id)getUndo;
-(id)getVariables;
-(id)goTo:(id)arg0 ;
-(id)init;
-(id)processActivity:(id)arg0 ;
-(id)processDirectInvocation:(id)arg0 ;
-(id)processEvent:(id)arg0 ;
-(id)processIntent:(id)arg0 ;
-(id)startConversation;
-(void)dealloc;
-(void)setExtensions:(id)arg0 ;


@end


#endif