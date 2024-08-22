// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MALEARNINGSTREAMRESULT_H
#define MALEARNINGSTREAMRESULT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_TtC17KnowledgeGraphKit29MAWrapperLearningStreamResult.h"

@interface MALearningStreamResult : NSObject {
    _TtC17KnowledgeGraphKit29MAWrapperLearningStreamResult *_underlyingObject;
}


@property (readonly, nonatomic) CGFloat confidence;
@property (readonly, copy, nonatomic) NSString *description;
@property (readonly, copy, nonatomic) NSString *detectedClass;


-(id)initWithWrapperLearningStreamResult:(id)arg0 ;


@end


#endif