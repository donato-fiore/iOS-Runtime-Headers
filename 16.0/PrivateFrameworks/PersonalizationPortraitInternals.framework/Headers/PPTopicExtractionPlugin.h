// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTOPICEXTRACTIONPLUGIN_H
#define PPTOPICEXTRACTIONPLUGIN_H


#import <Foundation/Foundation.h>

#import "PPTopicDissector.h"

@interface PPTopicExtractionPlugin : NSObject {
    PPTopicDissector *_dissector;
}




+(id)sharedInstance;
-(id)_topicContainersForText:(id)arg0 isPlainText:(BOOL)arg1 bundleId:(id)arg2 groupId:(id)arg3 documentId:(id)arg4 contactHandles:(id)arg5 weight:(CGFloat)arg6 isOutgoing:(BOOL)arg7 ;
-(id)extractionsFromText:(id)arg0 bundleId:(id)arg1 ;
-(id)init;
-(id)initWithTopicDissector:(id)arg0 ;


@end


#endif