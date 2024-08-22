// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMFMUTABLEMESSAGE_H
#define HMFMUTABLEMESSAGE_H

@class NSDictionary, NSUUID, NSString;


#import "HMFMessage.h"
#import "HMFActivity.h"
#import "HMFMessageDestination.h"
#import "HMFLogEventSession.h"
#import "HMFMessageTransport.h"

@interface HMFMutableMessage : HMFMessage

@property (retain, nonatomic) HMFActivity *activity;
@property (retain, nonatomic) HMFMessageDestination *destination;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) HMFLogEventSession *logEventSession;
@property (copy, nonatomic) NSDictionary *messagePayload;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) NSInteger qualityOfService;
@property (copy, nonatomic) id *responseHandler;
@property (nonatomic) CGFloat timeout;
@property (weak, nonatomic) HMFMessageTransport *transport;
@property (copy, nonatomic) NSDictionary *userInfo;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)setHeaderValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif