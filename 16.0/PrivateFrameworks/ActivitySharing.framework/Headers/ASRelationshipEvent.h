// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASRELATIONSHIPEVENT_H
#define ASRELATIONSHIPEVENT_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface ASRelationshipEvent : NSObject

@property (readonly, nonatomic) unsigned short anchor; // ivar: _anchor
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (readonly, nonatomic) unsigned short type; // ivar: _type


+(id)_relationshipEventWithCodable:(id)arg0 ;
+(id)relationshipEventWithRecord:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRelationshipEvent:(id)arg0 ;
-(id)_codableRelationshipEvent;
-(id)description;
-(id)initWithType:(unsigned short)arg0 anchor:(unsigned short)arg1 timestamp:(id)arg2 ;


@end


#endif