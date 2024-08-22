// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPDOCUMENTTOPICINFO_H
#define PPDOCUMENTTOPICINFO_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PPDocumentTopicInfo : NSObject {
    NSMutableArray *_topicAlgorithmCounts;
}




-(CGFloat)countForAlgorithm:(NSUInteger)arg0 ;
-(id)init;
-(void)addToCountForAlgorithm:(NSUInteger)arg0 value:(CGFloat)arg1 ;


@end


#endif