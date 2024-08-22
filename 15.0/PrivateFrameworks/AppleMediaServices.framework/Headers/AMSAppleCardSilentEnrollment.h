// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSAPPLECARDSILENTENROLLMENT_H
#define AMSAPPLECARDSILENTENROLLMENT_H

@class NSString;
@protocol AMSBagConsumer;

#import <Foundation/Foundation.h>


@interface AMSAppleCardSilentEnrollment : NSObject <AMSBagConsumer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
+(id)gsTokenForAccount:(id)arg0 error:(*id)arg1 ;
+(id)headersForAccount:(id)arg0 ;
+(void)addRequiredBagKeysToAggregator:(id)arg0 ;


@end


#endif