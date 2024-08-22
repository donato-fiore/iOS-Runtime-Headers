// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUSCREENTIMEDATASOURCE_H
#define TUSCREENTIMEDATASOURCE_H

@class NSString, STManagementState;
@protocol TUScreenTimeStateDataSource;

#import <Foundation/Foundation.h>


@interface TUScreenTimeDataSource : NSObject <TUScreenTimeStateDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) STManagementState *screenTimeManagementState; // ivar: _screenTimeManagementState
@property (readonly) Class superclass;


-(id)init;
-(void)screenTimeStateWithCompletionHandler:(id)arg0 ;


@end


#endif