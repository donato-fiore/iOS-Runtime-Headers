// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCHEADLINESUPDATEOPERATION_H
#define FCHEADLINESUPDATEOPERATION_H

@class NSArray, NSDictionary;
@protocol FCCoreConfiguration, FCContentContext;


#import "FCOperation.h"

@interface FCHeadlinesUpdateOperation : FCOperation

@property (copy, nonatomic) NSObject<FCCoreConfiguration> *configuration; // ivar: _configuration
@property (retain, nonatomic) NSObject<FCContentContext> *context; // ivar: _context
@property (copy, nonatomic) NSArray *headlines; // ivar: _headlines
@property (nonatomic) CGFloat maxArticleAge; // ivar: _maxArticleAge
@property (copy, nonatomic) NSDictionary *resultHeadlinesByArticleID; // ivar: _resultHeadlinesByArticleID
@property (copy, nonatomic) id *updateCompletion; // ivar: _updateCompletion


-(BOOL)validateOperation;
-(id)init;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif