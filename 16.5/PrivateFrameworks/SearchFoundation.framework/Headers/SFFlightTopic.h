// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFFLIGHTTOPIC_H
#define SFFLIGHTTOPIC_H

@class NSDate, NSString;
@protocol SFFlightTopic;


#import "SFQueryTopic.h"

@interface SFFlightTopic : SFQueryTopic <SFFlightTopic>



@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, nonatomic) int queryType;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQuery:(id)arg0 date:(id)arg1 ;
-(id)initWithQuery:(id)arg0 date:(id)arg1 identifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif