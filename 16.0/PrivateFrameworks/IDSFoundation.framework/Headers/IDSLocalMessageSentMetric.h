// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSLOCALMESSAGESENTMETRIC_H
#define IDSLOCALMESSAGESENTMETRIC_H

@class PBCodable<NSCopying>, NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric, CUTAWDMetric;

#import <Foundation/Foundation.h>


@interface IDSLocalMessageSentMetric : NSObject <CUTCoreAnalyticsMetric, CUTAWDMetric>



@property (readonly) unsigned int awdIdentifier;
@property (readonly, nonatomic) PBCodable<NSCopying> *awdRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isToDefaultPairedDevice; // ivar: _isToDefaultPairedDevice
@property (readonly, nonatomic) NSUInteger linkType; // ivar: _linkType
@property (readonly, nonatomic) NSInteger messageSize; // ivar: _messageSize
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, nonatomic) NSString *service; // ivar: _service
@property (readonly) Class superclass;


-(id)initWithService:(id)arg0 isToDefaultPairedDevice:(BOOL)arg1 messageSize:(NSInteger)arg2 linkType:(NSUInteger)arg3 priority:(NSInteger)arg4 ;


@end


#endif