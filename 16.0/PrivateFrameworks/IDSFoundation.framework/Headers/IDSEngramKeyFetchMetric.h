// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSENGRAMKEYFETCHMETRIC_H
#define IDSENGRAMKEYFETCHMETRIC_H

@class NSString, NSDictionary, NSError;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSEngramKeyFetchMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSError *keyFetchError; // ivar: _keyFetchError
@property (readonly, nonatomic) NSString *name;
@property (readonly) Class superclass;


-(id)initWithKeyFetchError:(id)arg0 ;


@end


#endif