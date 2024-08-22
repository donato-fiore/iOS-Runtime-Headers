// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCEDITORIALOPERATION_H
#define FCEDITORIALOPERATION_H

@class NSArray, NSError;
@protocol FCCoreConfiguration;


#import "FCOperation.h"
#import "FCCloudContext.h"
#import "FCSpotlightOperationResult.h"

@interface FCEditorialOperation : FCOperation

@property (copy, nonatomic) NSObject<FCCoreConfiguration> *configuration; // ivar: _configuration
@property (retain, nonatomic) FCCloudContext *context; // ivar: _context
@property (copy) NSArray *editorialSectionGroups; // ivar: _editorialSectionGroups
@property (retain) NSError *error; // ivar: _error
@property (copy) id *fetchCompletionHandler; // ivar: _fetchCompletionHandler
@property (retain) FCSpotlightOperationResult *spotlightResult; // ivar: _spotlightResult
@property (copy) NSArray *trendingHeadlines; // ivar: _trendingHeadlines


-(BOOL)validateOperation;
-(void)enumerateEditorialSectionsByRecencyWithBlock:(id)arg0 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif