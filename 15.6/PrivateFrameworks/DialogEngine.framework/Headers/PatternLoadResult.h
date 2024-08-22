// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PATTERNLOADRESULT_H
#define PATTERNLOADRESULT_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface PatternLoadResult : NSObject

@property (retain, nonatomic) NSDictionary *groups; // ivar: _groups
@property (retain, nonatomic) NSDictionary *meta; // ivar: _meta
@property (retain, nonatomic) NSString *patternId; // ivar: _patternId
@property (nonatomic) NSUInteger patternType; // ivar: _patternType
@property (retain, nonatomic) NSDictionary *settings; // ivar: _settings


-(id)getPrompts;


@end


#endif