// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSABSINTHE_H
#define AMSABSINTHE_H

@class NSString;
@protocol AMSBagConsumer_Project, AMSBagConsumer;

#import <Foundation/Foundation.h>


@interface AMSAbsinthe : NSObject <AMSBagConsumer_Project, AMSBagConsumer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_dataToSignFromRequest:(id)arg0 bagDefinition:(id)arg1 ;
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
+(id)handleResponse:(id)arg0 bag:(id)arg1 ;
+(id)headersForRequest:(id)arg0 buyParams:(id)arg1 bag:(id)arg2 ;
+(void)_signingDataFromRequest:(id)arg0 buyParams:(id)arg1 bag:(id)arg2 completion:(id)arg3 ;
+(void)addRequiredBagKeysToAggregator:(id)arg0 ;


@end


#endif