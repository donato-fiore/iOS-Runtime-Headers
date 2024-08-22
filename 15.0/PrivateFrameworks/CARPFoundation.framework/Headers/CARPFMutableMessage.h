// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARPFMUTABLEMESSAGE_H
#define CARPFMUTABLEMESSAGE_H

@class NSDictionary, NSUUID, NSString;


#import "CARPFMessage.h"
#import "CARPFActivity.h"
#import "CARPFMessageDestination.h"
#import "CARPFLogEventSession.h"
#import "CARPFMessageTransport.h"

@interface CARPFMutableMessage : CARPFMessage

@property (retain, nonatomic) CARPFActivity *activity;
@property (retain, nonatomic) CARPFMessageDestination *destination;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) CARPFLogEventSession *logEventSession;
@property (copy, nonatomic) NSDictionary *messagePayload;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) NSInteger qualityOfService;
@property (copy, nonatomic) id *responseHandler;
@property (nonatomic) CGFloat timeout;
@property (weak, nonatomic) CARPFMessageTransport *transport;
@property (copy, nonatomic) NSDictionary *userInfo;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)setHeaderValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif