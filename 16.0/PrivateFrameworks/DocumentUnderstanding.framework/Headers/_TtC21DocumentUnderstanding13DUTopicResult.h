// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC21DOCUMENTUNDERSTANDING13DUTOPICRESULT_H
#define _TTC21DOCUMENTUNDERSTANDING13DUTOPICRESULT_H

@class NSString;
@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "_TtC21DocumentUnderstanding26DUGlobalTopicSetIdentifier.h"

@interface _TtC21DocumentUnderstanding13DUTopicResult : NSObject <NSCoding, NSCopying>

 {
    ? topicIdentifier;
}


@property (nonatomic) CGFloat topicConfidence; // ivar: topicConfidence
@property (nonatomic, copy) NSString *topicIdentifier;
@property (nonatomic, retain) _TtC21DocumentUnderstanding26DUGlobalTopicSetIdentifier *topicSet; // ivar: topicSet


-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif