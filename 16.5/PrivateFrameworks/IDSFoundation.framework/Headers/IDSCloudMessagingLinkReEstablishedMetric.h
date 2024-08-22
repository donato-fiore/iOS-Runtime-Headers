// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSCLOUDMESSAGINGLINKREESTABLISHEDMETRIC_H
#define IDSCLOUDMESSAGINGLINKREESTABLISHEDMETRIC_H

@class PBCodable<NSCopying>, NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric, CUTAWDMetric;

#import <Foundation/Foundation.h>


@interface IDSCloudMessagingLinkReEstablishedMetric : NSObject <CUTCoreAnalyticsMetric, CUTAWDMetric>



@property (readonly) unsigned int awdIdentifier;
@property (readonly, nonatomic) PBCodable<NSCopying> *awdRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat inactiveTime; // ivar: _inactiveTime
@property (readonly, nonatomic) NSUInteger linkType; // ivar: _linkType
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUInteger priorLinkType; // ivar: _priorLinkType
@property (readonly) Class superclass;


-(id)initWithInactiveTime:(CGFloat)arg0 linkType:(NSUInteger)arg1 priorLinkType:(NSUInteger)arg2 ;


@end


#endif