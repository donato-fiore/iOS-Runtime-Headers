// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSCARDAUTOENROLLMENT_H
#define AMSCARDAUTOENROLLMENT_H

@class NSString;
@protocol AMSBagConsumer_Project, AMSBagConsumer;

#import <Foundation/Foundation.h>


@interface AMSCardAutoEnrollment : NSObject <AMSBagConsumer_Project, AMSBagConsumer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
+(void)addRequiredBagKeysToAggregator:(id)arg0 ;


@end


#endif