// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDINTERACTIONADVISOR_H
#define _CDINTERACTIONADVISOR_H

@class NSXPCConnection, NSError;
@protocol _CDInteractionAdvising;

#import <Foundation/Foundation.h>


@interface _CDInteractionAdvisor : NSObject <_CDInteractionAdvising>

 {
    NSXPCConnection *_connection;
}


@property (retain, nonatomic) NSError *error; // ivar: _error


+(id)interactionAdvisor;
-(id)adviseInteractionsForDate:(id)arg0 usingSettings:(id)arg1 ;
-(id)adviseInteractionsForKeywordsInString:(id)arg0 usingSettings:(id)arg1 ;
-(id)adviseInteractionsForLocation:(id)arg0 usingSettings:(id)arg1 ;
-(id)adviseInteractionsUsingSettings:(id)arg0 ;
-(id)adviseSocialInteractionsForDate:(id)arg0 andSeedContacts:(id)arg1 usingSettings:(id)arg2 ;
-(id)initWithServiceName:(id)arg0 ;
-(id)rankCandidateContacts:(id)arg0 usingSettings:(id)arg1 ;
-(void)dealloc;
-(void)tuneSocialAdvisorUsingSettings:(id)arg0 heartBeatHandler:(id)arg1 ;


@end


#endif