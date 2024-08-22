// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC17KNOWLEDGEGRAPHKIT29MAWRAPPERLEARNINGSTREAMRESULT_H
#define _TTC17KNOWLEDGEGRAPHKIT29MAWRAPPERLEARNINGSTREAMRESULT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC17KnowledgeGraphKit29MAWrapperLearningStreamResult : NSObject {
    ? detectedClass;
}


@property (nonatomic, readonly) CGFloat confidence; // ivar: confidence
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *detectedClass;


-(id)init;


@end


#endif