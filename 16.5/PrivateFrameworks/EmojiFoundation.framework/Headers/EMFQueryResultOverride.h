// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMFQUERYRESULTOVERRIDE_H
#define EMFQUERYRESULTOVERRIDE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface EMFQueryResultOverride : NSObject

@property (readonly, nonatomic) NSUInteger overrideBehavior; // ivar: _overrideBehavior
@property (readonly, nonatomic) NSUInteger overrideSearchType; // ivar: _overrideSearchType
@property (readonly, nonatomic) NSArray *results; // ivar: _results


-(id)description;
-(id)initWithOverridesArray:(id)arg0 searchType:(NSUInteger)arg1 behavior:(NSUInteger)arg2 ;


@end


#endif