// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLNLPLANGUAGEMODELNODE_H
#define NLNLPLANGUAGEMODELNODE_H

@class NSArray, NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface NLNLPLanguageModelNode : NSObject {
    NSArray *_tokenIDs;
    NSMutableSet *_strings;
    NSMutableDictionary *_children;
}




+(id)conditionalProbabilitiesForStrings:(id)arg0 modelState:(*void)arg1 copyRequired:(BOOL)arg2 ;
-(BOOL)isLeaf;
-(id)_treeDescriptionWithPrefix:(id)arg0 ;
-(id)description;
-(id)initWithTokenIDs:(id)arg0 ;
-(id)treeDescription;
-(void)_addString:(id)arg0 tokenIDs:(id)arg1 ;
-(void)_evaluateChildrenWithModelState:(*void)arg0 copyRequired:(BOOL)arg1 probability:(CGFloat)arg2 dictionary:(id)arg3 ;
-(void)_setProbability:(CGFloat)arg0 dictionary:(id)arg1 ;


@end


#endif