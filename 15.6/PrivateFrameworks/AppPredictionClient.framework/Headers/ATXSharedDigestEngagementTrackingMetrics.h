// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXSHAREDDIGESTENGAGEMENTTRACKINGMETRICS_H
#define ATXSHAREDDIGESTENGAGEMENTTRACKINGMETRICS_H

@class NSString;
@protocol NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, NSCopying;

#import <Foundation/Foundation.h>


@interface ATXSharedDigestEngagementTrackingMetrics : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, NSCopying>



@property (nonatomic) NSUInteger numDigestExpansions; // ivar: _numDigestExpansions
@property (nonatomic) NSUInteger numEngagementsAfterExpiration; // ivar: _numEngagementsAfterExpiration
@property (nonatomic) NSUInteger numEngagementsInScheduled; // ivar: _numEngagementsInScheduled
@property (nonatomic) NSUInteger numEngagementsInUpcoming; // ivar: _numEngagementsInUpcoming
@property (nonatomic) NSUInteger numExpansions; // ivar: _numExpansions
@property (copy, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier
@property (nonatomic) NSUInteger sectionPosition; // ivar: _sectionPosition
@property (nonatomic) NSUInteger sectionSize; // ivar: _sectionSize


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXSharedDigestEngagementTrackingMetrics:(id)arg0 ;
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
-(void)addMetricsFromOtherTracker:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif