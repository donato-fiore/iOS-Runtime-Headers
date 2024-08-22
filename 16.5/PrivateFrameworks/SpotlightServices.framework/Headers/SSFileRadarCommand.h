// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSFILERADARCOMMAND_H
#define SSFILERADARCOMMAND_H

@class SFCommand, NSArray, NSString;


#import "SPSearchQueryContext.h"
#import "SSRankingManager.h"

@interface SSFileRadarCommand : SFCommand

@property (retain, nonatomic) NSArray *attachmentPaths; // ivar: _attachmentPaths
@property (retain, nonatomic) NSString *classification; // ivar: _classification
@property (nonatomic) NSUInteger componentID; // ivar: _componentID
@property (retain, nonatomic) NSString *componentName; // ivar: _componentName
@property (retain, nonatomic) NSString *componentVersion; // ivar: _componentVersion
@property (retain, nonatomic) NSArray *extensionIdentifiers; // ivar: _extensionIdentifiers
@property (retain, nonatomic) NSString *problemDescription; // ivar: _problemDescription
@property (retain, nonatomic) SPSearchQueryContext *queryContext; // ivar: _queryContext
@property (retain, nonatomic) SSRankingManager *rankingManager; // ivar: _rankingManager
@property (retain, nonatomic) NSString *reproducibility; // ivar: _reproducibility
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)buildVersion;
-(id)init;
-(id)initWithQueryContext:(id)arg0 ;
-(id)initWithQueryString:(id)arg0 ;


@end


#endif