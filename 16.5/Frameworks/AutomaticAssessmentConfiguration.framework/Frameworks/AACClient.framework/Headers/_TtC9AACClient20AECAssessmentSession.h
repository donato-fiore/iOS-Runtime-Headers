// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9AACCLIENT20AECASSESSMENTSESSION_H
#define _TTC9AACCLIENT20AECASSESSMENTSESSION_H

@protocol _TtP9AACClient28AECAssessmentSessionDelegate_;

#import <Foundation/Foundation.h>

#import "_TtC9AACClient26AECAssessmentConfiguration.h"

@interface _TtC9AACClient20AECAssessmentSession : NSObject {
    ? stateAntiphony;
    ? taskQueue;
    ? policyBundleFactory;
    ? configurationValidator;
    ? policySession;
    ? updateSubscription;
}


@property (nonatomic, retain) _TtC9AACClient26AECAssessmentConfiguration *configuration; // ivar: configuration
@property (nonatomic, weak) NSObject<_TtP9AACClient28AECAssessmentSessionDelegate_> *delegate; // ivar: delegate
@property (nonatomic, readonly) BOOL isActive;


-(id)init;
-(id)initWithConfiguration:(id)arg0 queue:(id)arg1 ;
-(void)begin;
-(void)end;
-(void)updateWithConfiguration:(id)arg0 ;


@end


#endif