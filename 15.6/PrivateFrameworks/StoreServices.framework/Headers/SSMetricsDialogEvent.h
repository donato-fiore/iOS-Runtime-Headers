// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSMETRICSDIALOGEVENT_H
#define SSMETRICSDIALOGEVENT_H

@class NSString, NSDictionary, NSArray;
@protocol SSXPCCoding;


#import "SSMetricsBaseEvent.h"

@interface SSMetricsDialogEvent : SSMetricsBaseEvent <SSXPCCoding>



@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *actionURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSString *dialogId;
@property (copy, nonatomic) NSString *dialogType;
@property (copy, nonatomic) NSString *dualAction;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *result;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *targetId;
@property (copy, nonatomic) NSArray *userActions;


-(id)copyXPCEncoding;
-(id)init;
-(id)initWithXPCEncoding:(id)arg0 ;


@end


#endif