// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOEXTERNALREQUESTCOUNTERINFO_H
#define GEOEXTERNALREQUESTCOUNTERINFO_H

@class NSString, NSDate;
@protocol GEOXPCSerializable;

#import <Foundation/Foundation.h>


@interface GEOExternalRequestCounterInfo : NSObject <GEOXPCSerializable>



@property (retain, nonatomic) NSString *appId; // ivar: _appId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *endTime; // ivar: _endTime
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger recvBytes; // ivar: _recvBytes
@property (retain, nonatomic) NSString *requestSubtype; // ivar: _requestSubtype
@property (retain, nonatomic) NSString *requestType; // ivar: _requestType
@property (retain, nonatomic) NSString *source; // ivar: _source
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger usedInterface; // ivar: _usedInterface
@property (nonatomic) NSInteger xmitBytes; // ivar: _xmitBytes


-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif