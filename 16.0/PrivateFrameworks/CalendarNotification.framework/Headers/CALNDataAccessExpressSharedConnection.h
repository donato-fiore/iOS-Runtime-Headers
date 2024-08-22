// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALNDATAACCESSEXPRESSSHAREDCONNECTION_H
#define CALNDATAACCESSEXPRESSSHAREDCONNECTION_H

@class NSString;
@protocol CALNDataAccessExpressConnection;

#import <Foundation/Foundation.h>


@interface CALNDataAccessExpressSharedConnection : NSObject <CALNDataAccessExpressConnection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedConnection;
-(void)reportSharedCalendarInviteAsJunkForCalendarWithID:(id)arg0 accountID:(id)arg1 queue:(id)arg2 completionBlock:(id)arg3 ;
-(void)respondToSharedCalendarInvite:(NSInteger)arg0 forCalendarWithID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(id)arg4 ;


@end


#endif