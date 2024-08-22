// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICHASHTAGSNODE_H
#define ICHASHTAGSNODE_H

@class NSMutableDictionary, NSMutableSet, NSString;

#import <Foundation/Foundation.h>


@interface ICHashtagsNode : NSObject

@property (readonly, nonatomic) NSMutableDictionary *children; // ivar: _children
@property (readonly, nonatomic) NSMutableSet *hashtagSuggestions; // ivar: _hashtagSuggestions
@property (nonatomic) BOOL isPossibleAll; // ivar: _isPossibleAll
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSMutableSet *possibleHashtagSuggestions; // ivar: _possibleHashtagSuggestions


-(void)addChild:(id)arg0 ;
-(void)addHashtagSuggestion:(id)arg0 ;
-(void)addPossibleHashtagSuggestion:(id)arg0 ;


@end


#endif