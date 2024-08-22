// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGSTRINGDONATIONHANDLER_H
#define SGSTRINGDONATIONHANDLER_H

@protocol PPStringDonationProtocol;

#import <Foundation/Foundation.h>

#import "SGTopicExtractionPlugin.h"
#import "SGNamedEntityExtractionPlugin.h"

@interface SGStringDonationHandler : NSObject <PPStringDonationProtocol>

 {
    SGTopicExtractionPlugin *_topicPlugin;
    SGNamedEntityExtractionPlugin *_namedEntityPlugin;
}




-(BOOL)_donateNotificationFromLabeledStrings:(id)arg0 bundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 error:(*id)arg4 ;
-(id)init;
-(id)initWithTopicPlugin:(id)arg0 namedEntityPlugin:(id)arg1 ;
-(void)_donateNamedEntitiesFromLabeledStrings:(id)arg0 bundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 ;
-(void)_donateTopicsFromLabeledStrings:(id)arg0 bundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 ;
-(void)donateLabeledStrings:(id)arg0 bundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 completion:(id)arg4 ;


@end


#endif