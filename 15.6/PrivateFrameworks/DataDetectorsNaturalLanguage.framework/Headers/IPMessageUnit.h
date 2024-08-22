// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IPMESSAGEUNIT_H
#define IPMESSAGEUNIT_H

@class NSMutableArray, NSArray, NSIndexSet, NSString;

#import <Foundation/Foundation.h>

#import "IPMessage.h"
#import "IPMessageUnit.h"

@interface IPMessageUnit : NSObject {
    NSMutableArray *_followups;
    NSArray *_flatMessageThread;
    NSIndexSet *_rejectionRanges;
    NSIndexSet *_proposalAndAcceptationRanges;
    NSIndexSet *_neutralRanges;
    NSString *_bestLanguage;
    NSString *_lowercaseTextTruncated;
}


@property (readonly) NSArray *dataFeatures; // ivar: _dataFeatures
@property (readonly) NSArray *features; // ivar: _features
@property (readonly) NSArray *followups;
@property (readonly) NSInteger indexInOriginalMessage; // ivar: _indexInOriginalMessage
@property _NSRange interactedDateRange; // ivar: _interactedDateRange
@property (readonly) NSArray *keywordFeatures; // ivar: _keywordFeatures
@property (readonly, copy) NSString *lowercaseTextTruncated;
@property (readonly, weak) IPMessage *originalMessage; // ivar: _originalMessage
@property (readonly, weak) IPMessageUnit *previous; // ivar: _previous
@property (readonly) NSArray *sentenceFeatures; // ivar: _sentenceFeatures
@property (readonly, copy) NSString *text; // ivar: _text


-(id)bestLanguageID;
-(id)description;
-(id)initWithText:(id)arg0 originalMessage:(id)arg1 index:(NSInteger)arg2 ;
-(id)neutralRanges;
-(id)proposalAndAcceptationRanges;
-(id)rejectionRanges;
-(void)addFollowup:(id)arg0 ;


@end


#endif