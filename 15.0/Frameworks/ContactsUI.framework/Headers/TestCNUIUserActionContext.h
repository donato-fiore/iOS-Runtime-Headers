// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TESTCNUIUSERACTIONCONTEXT_H
#define TESTCNUIUSERACTIONCONTEXT_H

@class NSString, BSServiceConnectionEndpoint;
@protocol CNUIUserActionContext, CNUIUserActionCurator, CNUIUserActionRecorder, CNUIUserActionDialRequestOpener, CNUIUserActionURLOpener, CNUIUserActionUserActivityOpener;

#import <Foundation/Foundation.h>


@interface TestCNUIUserActionContext : NSObject <CNUIUserActionContext>



@property (readonly, nonatomic) NSObject<CNUIUserActionCurator> *actionCurator;
@property (nonatomic) BOOL actionExecutionWasAttemted; // ivar: _actionExecutionWasAttemted
@property (readonly, nonatomic) NSObject<CNUIUserActionRecorder> *actionRecorder;
@property (copy, nonatomic) NSString *channelIdentifier; // ivar: _channelIdentifier
@property (copy, nonatomic) BSServiceConnectionEndpoint *connectionEndpoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<CNUIUserActionDialRequestOpener> *dialRequestOpener;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CNUIUserActionURLOpener> *urlOpener;
@property (readonly, nonatomic) NSObject<CNUIUserActionUserActivityOpener> *userActivityOpener;


-(id)nilValue;


@end


#endif