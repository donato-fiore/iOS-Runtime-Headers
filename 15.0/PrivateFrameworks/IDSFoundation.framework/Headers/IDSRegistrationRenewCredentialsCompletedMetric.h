// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSREGISTRATIONRENEWCREDENTIALSCOMPLETEDMETRIC_H
#define IDSREGISTRATIONRENEWCREDENTIALSCOMPLETEDMETRIC_H

@class NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSRegistrationRenewCredentialsCompletedMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSInteger errorCode; // ivar: _errorCode
@property (readonly, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name;
@property (readonly, nonatomic) NSInteger renewResult; // ivar: _renewResult
@property (readonly) Class superclass;


-(id)initWithRenewResult:(NSInteger)arg0 errorDomain:(id)arg1 errorCode:(NSInteger)arg2 ;


@end


#endif