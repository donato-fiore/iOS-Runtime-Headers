// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RTSOURCEEVENTKIT_H
#define RTSOURCEEVENTKIT_H

@class NSDate, NSString, NSDictionary;


#import "RTSource.h"

@interface RTSourceEventKit : RTSource

@property (readonly, nonatomic, getter=isAllDay) BOOL allDay; // ivar: _allDay
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSString *eventIdentifier; // ivar: _eventIdentifier
@property (readonly, nonatomic) NSString *location; // ivar: _location
@property (readonly, nonatomic) NSUInteger sharingStatus; // ivar: _sharingStatus
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSString *suggestionInfo_opaqueKey; // ivar: _suggestionInfo_opaqueKey
@property (readonly, nonatomic) NSDictionary *suggestionsSchemaOrg; // ivar: _suggestionsSchemaOrg
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)sharingStatusToString:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventIdentifier:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 title:(id)arg3 location:(id)arg4 allDay:(BOOL)arg5 sharingStatus:(NSUInteger)arg6 ;
-(id)initWithEventIdentifier:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 title:(id)arg3 location:(id)arg4 allDay:(BOOL)arg5 sharingStatus:(NSUInteger)arg6 suggestionInfo_opaqueKey:(id)arg7 ;
-(id)initWithEventIdentifier:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 title:(id)arg3 location:(id)arg4 allDay:(BOOL)arg5 sharingStatus:(NSUInteger)arg6 suggestionInfo_opaqueKey:(id)arg7 suggestionsSchemaOrg:(id)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif