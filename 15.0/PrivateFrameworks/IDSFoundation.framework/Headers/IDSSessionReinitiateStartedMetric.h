// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSSESSIONREINITIATESTARTEDMETRIC_H
#define IDSSESSIONREINITIATESTARTEDMETRIC_H

@class NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSSessionReinitiateStartedMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *guid; // ivar: _guid
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;


-(id)initWithGuid:(id)arg0 ;


@end


#endif