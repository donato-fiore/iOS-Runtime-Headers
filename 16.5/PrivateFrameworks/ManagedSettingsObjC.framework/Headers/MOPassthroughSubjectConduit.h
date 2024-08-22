// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOPASSTHROUGHSUBJECTCONDUIT_H
#define MOPASSTHROUGHSUBJECTCONDUIT_H

@class NSString, NSUUID;
@protocol MOSubscription;

#import <Foundation/Foundation.h>

#import "MOSubscriber.h"
#import "MOPassthroughSubject.h"

@interface MOPassthroughSubjectConduit : NSObject <MOSubscription>



@property (readonly, nonatomic) BOOL active; // ivar: _active
@property (readonly, nonatomic) NSUInteger currentDemand;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger demand; // ivar: _demand
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) MOSubscriber *downstream; // ivar: _downstream
@property (readonly, nonatomic) BOOL hasDemand;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject *lock; // ivar: _lock
@property (readonly, weak, nonatomic) MOPassthroughSubject *parent; // ivar: _parent
@property (readonly) Class superclass;


-(id)initWithDownstream:(id)arg0 parent:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)finishWithCompletion:(id)arg0 ;
-(void)offerInput:(id)arg0 ;
-(void)requestDemand:(NSUInteger)arg0 ;


@end


#endif