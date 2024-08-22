// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOREQUESTCOUNTERCACHEGETRESULTS_H
#define GEOREQUESTCOUNTERCACHEGETRESULTS_H

@class NSString, NSDate;
@protocol GEOXPCRequest;


#import "GEOXPCRequest.h"

@interface GEORequestCounterCacheGetResults : GEOXPCRequest <GEOXPCRequest>



@property (retain, nonatomic) NSString *appId; // ivar: _appId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *endTime; // ivar: _endTime
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (nonatomic) int requestKindRaw; // ivar: _requestKindRaw
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime
@property (readonly) Class superclass;


+(Class)replyClass;
-(BOOL)expectsReply;
-(BOOL)isValid;
-(id)initWithTraits:(id)arg0 auditToken:(id)arg1 throttleToken:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif