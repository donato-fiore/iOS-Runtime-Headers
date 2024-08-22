// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC16SIRISESSIONSTORE19SESSIONSTORESERVICE_H
#define _TTC16SIRISESSIONSTORE19SESSIONSTORESERVICE_H

@protocol _TtP22SiriSessionStoreClient18SiriSessionService_;

#import <Foundation/Foundation.h>


@interface _TtC16SiriSessionStore19SessionStoreService : NSObject <_TtP22SiriSessionStoreClient18SiriSessionService_>





-(id)init;
-(void)clearSessionStateForId:(id)arg0 ;
-(void)getLastCommittedValuesForId:(id)arg0 withValues:(id)arg1 ;
-(void)getValueForId:(id)arg0 forKey:(id)arg1 withValue:(id)arg2 ;
-(void)getValuesForId:(id)arg0 forKeys:(id)arg1 withValues:(id)arg2 ;
-(void)writeValuesForId:(id)arg0 values:(id)arg1 ;


@end


#endif