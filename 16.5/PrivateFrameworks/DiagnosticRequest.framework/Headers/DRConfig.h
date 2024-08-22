// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRCONFIG_H
#define DRCONFIG_H

@class NSString, NSUUID, NSDate, NSData, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DRConfig : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *build; // ivar: _build
@property (readonly, nonatomic) NSString *configDescription; // ivar: _configDescription
@property (readonly, nonatomic) NSUUID *configUUID; // ivar: _configUUID
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSData *payload; // ivar: _payload
@property (readonly, nonatomic) NSDictionary *payloadDictionaryRepresentation; // ivar: _payloadDictionaryRepresentation
@property (readonly, nonatomic) BOOL payloadIsJSON; // ivar: _payloadIsJSON
@property (readonly, nonatomic) NSDate *receivedDate; // ivar: _receivedDate
@property (readonly, nonatomic) BOOL skippedHysteresis; // ivar: _skippedHysteresis
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSString *teamID; // ivar: _teamID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConfig:(id)arg0 ;
-(id)initWithBuild:(id)arg0 teamID:(id)arg1 configDescription:(id)arg2 configUUID:(id)arg3 receivedDate:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 payload:(id)arg7 payloadIsJSON:(BOOL)arg8 skipHysteresis:(BOOL)arg9 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONDict:(id)arg0 receivedDate:(id)arg1 ;
-(id)jsonDictRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif