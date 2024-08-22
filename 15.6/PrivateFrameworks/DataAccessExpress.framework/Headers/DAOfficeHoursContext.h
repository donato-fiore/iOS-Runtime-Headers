// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DAOFFICEHOURSCONTEXT_H
#define DAOFFICEHOURSCONTEXT_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DAOfficeHoursContext : NSObject

@property (copy, nonatomic) NSString *accountID; // ivar: _accountID
@property (copy, nonatomic) id *fetchCompletionBlock; // ivar: _fetchCompletionBlock
@property (readonly, nonatomic) BOOL isFetch;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) id *setCompletionBlock; // ivar: _setCompletionBlock


-(void)abortWithError:(id)arg0 ;
-(void)finishFetchWithOfficeHours:(id)arg0 error:(id)arg1 ;
-(void)finishSetWithError:(id)arg0 ;


@end


#endif