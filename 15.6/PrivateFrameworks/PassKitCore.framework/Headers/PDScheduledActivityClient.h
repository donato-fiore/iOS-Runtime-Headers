// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDSCHEDULEDACTIVITYCLIENT_H
#define PDSCHEDULEDACTIVITYCLIENT_H

@class NSMutableDictionary;
@protocol NSSecureCoding, OS_dispatch_queue, PDScheduledActivityClient;

#import <Foundation/Foundation.h>


@interface PDScheduledActivityClient : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *activityQueue; // ivar: _activityQueue
@property (retain, nonatomic) NSMutableDictionary *activityRegistrations; // ivar: _activityRegistrations
@property (weak, nonatomic) NSObject<PDScheduledActivityClient> *clientInstance; // ivar: _clientInstance
@property (readonly, nonatomic) BOOL isValid;


+(BOOL)supportsSecureCoding;
-(id)initWithClientInstance:(id)arg0 activityQueue:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif