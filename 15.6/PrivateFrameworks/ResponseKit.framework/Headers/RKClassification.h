// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RKCLASSIFICATION_H
#define RKCLASSIFICATION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface RKClassification : NSObject

@property (retain) NSArray *customResponses; // ivar: _customResponses
@property NSUInteger gender; // ivar: _gender
@property (retain) NSString *language; // ivar: _language
@property (retain) NSArray *matchedRanges; // ivar: _matchedRanges
@property (getter=isSensitive) int sensitive; // ivar: _sensitive
@property (retain) NSArray *sentenceEntities; // ivar: _sentenceEntities
@property NSUInteger sentenceType; // ivar: _sentenceType
@property (retain) NSString *taggedText; // ivar: _taggedText


-(id)init;


@end


#endif