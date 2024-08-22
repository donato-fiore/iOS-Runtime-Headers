// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGSHARINGSUGGESTIONRESULT_H
#define PGSHARINGSUGGESTIONRESULT_H

@class NSDictionary, NSArray;
@protocol PGPersonResult;

#import <Foundation/Foundation.h>


@interface PGSharingSuggestionResult : NSObject

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSObject<PGPersonResult> *person; // ivar: _person
@property (readonly, nonatomic) CGFloat score;
@property (readonly, nonatomic) NSArray *sourceNames; // ivar: _sourceNames
@property (readonly, nonatomic) CGFloat sourceWeight; // ivar: _sourceWeight
@property (nonatomic) BOOL useContactSuggestion; // ivar: _useContactSuggestion
@property (readonly, nonatomic) CGFloat weight; // ivar: _weight


+(id)suggestionResultWithPerson:(id)arg0 weight:(CGFloat)arg1 sourceWeight:(CGFloat)arg2 sourceName:(id)arg3 ;
-(id)description;
-(id)initWithPerson:(id)arg0 weight:(CGFloat)arg1 sourceWeight:(CGFloat)arg2 sourceName:(id)arg3 ;
-(void)mergeWithSuggestionResult:(id)arg0 ;


@end


#endif