// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALLOGFILTER_H
#define CALLOGFILTER_H

@class NSArray, NSSet;

#import <Foundation/Foundation.h>


@interface CalLogFilter : NSObject

@property (copy, nonatomic) NSArray *excludes; // ivar: _excludes
@property (retain, nonatomic) NSArray *excludesAsRegexes; // ivar: _excludesAsRegexes
@property (copy, nonatomic) NSArray *includes; // ivar: _includes
@property (retain, nonatomic) NSArray *includesAsRegexes; // ivar: _includesAsRegexes
@property (copy, nonatomic) NSSet *includesRegardlessOfLevel; // ivar: _includesRegardlessOfLevel
@property (nonatomic) int minimumLevel; // ivar: _minimumLevel


-(BOOL)proceedProcessingLogName:(id)arg0 ;
-(id)description;
-(id)generateRegexesForPatterns:(id)arg0 ;
-(id)init;


@end


#endif