// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXDIGESTTIMELINE_H
#define ATXDIGESTTIMELINE_H

@class NSDate;
@protocol NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, NSCopying;

#import <Foundation/Foundation.h>


@interface ATXDigestTimeline : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, NSCopying>



@property (retain, nonatomic) NSDate *digestRemovedTimestamp; // ivar: _digestRemovedTimestamp
@property (retain, nonatomic) NSDate *firstCollapsedViewTimestamp; // ivar: _firstCollapsedViewTimestamp
@property (retain, nonatomic) NSDate *firstScheduledViewTimestamp; // ivar: _firstScheduledViewTimestamp
@property (retain, nonatomic) NSDate *firstUpcomingViewTimestamp; // ivar: _firstUpcomingViewTimestamp


+(BOOL)supportsSecureCoding;
-(BOOL)_timelineFieldsAreEqual:(id)arg0 otherField:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXDigestTimeline:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeAsProto;
-(id)initFromJSON:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonDict;
-(id)jsonRepresentation;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif