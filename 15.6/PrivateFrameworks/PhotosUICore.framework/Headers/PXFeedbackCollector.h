// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFEEDBACKCOLLECTOR_H
#define PXFEEDBACKCOLLECTOR_H


#import <Foundation/Foundation.h>

#import "PXFeedbackStore.h"

@interface PXFeedbackCollector : NSObject

@property (readonly, nonatomic) PXFeedbackStore *feedbackStore; // ivar: _feedbackStore


-(id)_appVersion;
-(id)_uniqueSystemIdentifier;
-(id)addFeedbackFromDictionary:(id)arg0 ;
-(id)feedbackEntryFromDictionary:(id)arg0 ;
-(id)init;
-(void)addFeedbackEntry:(id)arg0 ;
-(void)removeFeedbackEntry:(id)arg0 ;


@end


#endif