// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDDATASTREAMBULKSENDOPENSESSIONRESULT_H
#define HMDDATASTREAMBULKSENDOPENSESSIONRESULT_H

@class NSDictionary;
@protocol HMDDataStreamBulkSendSession;

#import <Foundation/Foundation.h>


@interface HMDDataStreamBulkSendOpenSessionResult : NSObject

@property (readonly, nonatomic) NSDictionary *payload; // ivar: _payload
@property (readonly, nonatomic) NSObject<HMDDataStreamBulkSendSession> *session; // ivar: _session


-(id)attributeDescriptions;
-(id)initWithSession:(id)arg0 payload:(id)arg1 ;


@end


#endif