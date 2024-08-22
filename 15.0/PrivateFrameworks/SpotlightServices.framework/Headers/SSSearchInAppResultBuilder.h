// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSSEARCHINAPPRESULTBUILDER_H
#define SSSEARCHINAPPRESULTBUILDER_H

@class NSString;


#import "SSResultBuilder.h"

@interface SSSearchInAppResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (retain, nonatomic) NSString *appName; // ivar: _appName
@property (retain, nonatomic) NSString *searchString; // ivar: _searchString


+(id)buildResultWithAppName:(id)arg0 appBundleId:(id)arg1 searchString:(id)arg2 ;
-(id)buildCommand;
-(id)buildInlineCardSections;
-(id)buildResult;
-(id)initWithAppName:(id)arg0 appBundleId:(id)arg1 searchString:(id)arg2 ;


@end


#endif