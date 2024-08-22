// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKEVENT_H
#define WLKEVENT_H

@class NSString, NSDate, NSNumber, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WLKEvent : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger airingType; // ivar: _airingType
@property (readonly, nonatomic) NSString *airingTypeString; // ivar: _airingTypeString
@property (readonly, nonatomic) NSString *canonicalID; // ivar: _canonicalID
@property (readonly, nonatomic) NSDate *canonicalStartDate; // ivar: _canonicalStartDate
@property (readonly, nonatomic) NSString *channelID; // ivar: _channelID
@property (readonly, nonatomic) NSNumber *cleanupTime; // ivar: _cleanupTime
@property (readonly, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSString *externalPlayableID; // ivar: _externalPlayableID
@property (readonly, nonatomic) NSString *externalServiceID; // ivar: _externalServiceID
@property (readonly, nonatomic) NSString *legID; // ivar: _legID
@property (readonly, nonatomic) NSString *serviceID; // ivar: _serviceID
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif