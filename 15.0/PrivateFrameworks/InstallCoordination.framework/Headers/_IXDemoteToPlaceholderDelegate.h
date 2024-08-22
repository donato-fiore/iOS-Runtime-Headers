// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _IXDEMOTETOPLACEHOLDERDELEGATE_H
#define _IXDEMOTETOPLACEHOLDERDELEGATE_H

@class NSString;
@protocol IXAppInstallCoordinatorObserver;

#import <Foundation/Foundation.h>

#import "IXDemotingAppInstallCoordinator.h"

@interface _IXDemoteToPlaceholderDelegate : NSObject <IXAppInstallCoordinatorObserver>



@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) IXDemotingAppInstallCoordinator *coordinator; // ivar: _coordinator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)coordinator:(id)arg0 canceledWithReason:(id)arg1 client:(NSUInteger)arg2 ;
-(void)coordinatorDidCompleteSuccessfully:(id)arg0 ;


@end


#endif