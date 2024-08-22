// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPARSECSEARCHCOMPLETIONRESULTSET_H
#define WBSPARSECSEARCHCOMPLETIONRESULTSET_H

@class NSArray, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface WBSParsecSearchCompletionResultSet : NSObject {
    NSArray *_patternStrings;
    NSMutableDictionary *_patternStringsToPatterns;
}


@property (readonly, nonatomic) CGFloat completionScore; // ivar: _completionScore
@property (readonly, nonatomic) NSString *completionString; // ivar: _completionString
@property (readonly, nonatomic) NSString *errorCodeString; // ivar: _errorCodeString
@property (readonly, nonatomic) NSString *feedbackQueryIdentifier; // ivar: _feedbackQueryIdentifier
@property (readonly, nonatomic) CGFloat maxAge; // ivar: _maxAge
@property (readonly, nonatomic) NSString *prefix; // ivar: _prefix
@property (readonly, nonatomic) NSArray *results; // ivar: _results
@property (copy, nonatomic) NSString *status; // ivar: _status


+(id)resultSetSchemaWithCache:(id)arg0 ;
+(id)resultSetWithDictionary:(id)arg0 cache:(id)arg1 ;
-(id)_initWithDictionary:(id)arg0 cache:(id)arg1 ;
-(void)enumeratePatternsUsingBlock:(id)arg0 ;


@end


#endif