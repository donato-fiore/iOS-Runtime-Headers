// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPSTRINGDONATIONHANDLER_H
#define PPSTRINGDONATIONHANDLER_H

@protocol PPStringDonationProtocol;

#import <Foundation/Foundation.h>

#import "PPSWStringDonationConsumer.h"

@interface PPStringDonationHandler : NSObject <PPStringDonationProtocol>

 {
    PPSWStringDonationConsumer *_consumer;
}




-(id)init;
-(id)initWithTopicStore:(id)arg0 entityStore:(id)arg1 topicDissector:(id)arg2 entityDissector:(id)arg3 ;
-(void)donateLabeledStrings:(id)arg0 bundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 completion:(id)arg4 ;


@end


#endif