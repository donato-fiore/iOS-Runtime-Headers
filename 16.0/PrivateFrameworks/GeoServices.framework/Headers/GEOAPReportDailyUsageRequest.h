// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOAPREPORTDAILYUSAGEREQUEST_H
#define GEOAPREPORTDAILYUSAGEREQUEST_H

@class NSString, NSNumber;
@protocol GEOXPCRequest;


#import "GEOXPCRequest.h"

@interface GEOAPReportDailyUsageRequest : GEOXPCRequest <GEOXPCRequest>



@property (retain, nonatomic) NSString *appId; // ivar: _appId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *usageBool; // ivar: _usageBool
@property (retain, nonatomic) NSString *usageString; // ivar: _usageString
@property (nonatomic) int usageType; // ivar: _usageType


+(Class)replyClass;
-(BOOL)expectsReply;
-(BOOL)isValid;
-(id)initWithTraits:(id)arg0 auditToken:(id)arg1 throttleToken:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif