// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPTOPICWITHRECORD_H
#define PPTOPICWITHRECORD_H



#import "PPTopic.h"
#import "PPTopicRecord.h"

@interface PPTopicWithRecord : PPTopic {
    PPTopicRecord *_mostRelevantRecord;
}




-(CGFloat)sentimentScore;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTopicIdentifier:(id)arg0 mostRelevantRecord:(id)arg1 ;
-(id)mostRelevantRecord;


@end


#endif