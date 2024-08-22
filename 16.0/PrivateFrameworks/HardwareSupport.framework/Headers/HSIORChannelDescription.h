// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HSIORCHANNELDESCRIPTION_H
#define HSIORCHANNELDESCRIPTION_H

@class NSNumber, NSString, Protocol;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HSIORChannelDescription : NSObject <NSCopying>



@property (retain, nonatomic) NSNumber *driverIdentifier; // ivar: _driverIdentifier
@property (retain, nonatomic) NSString *driverName; // ivar: _driverName
@property (retain, nonatomic) NSString *groupName; // ivar: _groupName
@property (retain, nonatomic) NSNumber *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) Protocol *reportingProtocol; // ivar: _reportingProtocol
@property (retain, nonatomic) NSString *subGroupName; // ivar: _subGroupName
@property (retain, nonatomic) NSString *summary; // ivar: _summary


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToChannelDescription:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithIOReportChannelRef:(struct __CFDictionary *)arg0 ;


@end


#endif