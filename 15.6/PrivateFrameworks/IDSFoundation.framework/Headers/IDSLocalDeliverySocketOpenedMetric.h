// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSLOCALDELIVERYSOCKETOPENEDMETRIC_H
#define IDSLOCALDELIVERYSOCKETOPENEDMETRIC_H

@class NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSLocalDeliverySocketOpenedMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isToDefaultPairedDevice; // ivar: _isToDefaultPairedDevice
@property (readonly) NSString *name;
@property (readonly, nonatomic) NSUInteger openError; // ivar: _openError
@property (readonly, nonatomic) NSString *service; // ivar: _service
@property (readonly, nonatomic) NSUInteger socketError; // ivar: _socketError
@property (readonly) Class superclass;


-(id)initWithService:(id)arg0 isToDefaultPairedDevice:(BOOL)arg1 openError:(NSUInteger)arg2 socketError:(NSUInteger)arg3 ;


@end


#endif