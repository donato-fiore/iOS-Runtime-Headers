// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBZSTACKAUDITORPARTICIPANTRECORD_H
#define SBZSTACKAUDITORPARTICIPANTRECORD_H

@class NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBZStackAuditorParticipantRecord : NSObject <BSDescriptionProviding>



@property (nonatomic) NSInteger activationPolicy; // ivar: _activationPolicy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL homeAffordanceSuppressed; // ivar: _homeAffordanceSuppressed
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL ownsHomeGesture; // ivar: _ownsHomeGesture
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)summaryForLogging;


@end


#endif