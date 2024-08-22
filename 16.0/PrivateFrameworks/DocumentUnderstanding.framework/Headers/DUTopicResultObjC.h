// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DUTOPICRESULTOBJC_H
#define DUTOPICRESULTOBJC_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_TtC21DocumentUnderstanding13DUTopicResult.h"
#import "DUGlobalTopicSetIdentifierObjC.h"

@interface DUTopicResultObjC : NSObject {
    _TtC21DocumentUnderstanding13DUTopicResult *_underlying;
}


@property (nonatomic) CGFloat topicConfidence;
@property (copy, nonatomic) NSString *topicIdentifier;
@property (copy, nonatomic) DUGlobalTopicSetIdentifierObjC *topicSet;


-(id)init;


@end


#endif