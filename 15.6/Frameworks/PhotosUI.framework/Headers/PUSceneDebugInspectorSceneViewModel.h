// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSCENEDEBUGINSPECTORSCENEVIEWMODEL_H
#define PUSCENEDEBUGINSPECTORSCENEVIEWMODEL_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface PUSceneDebugInspectorSceneViewModel : NSObject

@property (nonatomic) NSUInteger count; // ivar: _count
@property (nonatomic) NSUInteger highConfidenceCount; // ivar: _highConfidenceCount
@property (readonly, nonatomic) BOOL isIndexed; // ivar: _isIndexed
@property (readonly, nonatomic) NSString *keyword; // ivar: _keyword
@property (nonatomic) CGFloat libraryCoverage; // ivar: _libraryCoverage
@property (readonly, nonatomic) unsigned int sceneIdentifier; // ivar: _sceneIdentifier
@property (readonly, nonatomic) NSArray *synonyms; // ivar: _synonyms
@property (readonly, nonatomic) CGFloat threshold; // ivar: _threshold


-(id)concatenatedSynonyms;
-(id)description;
-(id)initWithKeyword:(id)arg0 synonyms:(id)arg1 sceneIdentifier:(unsigned int)arg2 indexed:(BOOL)arg3 threshold:(CGFloat)arg4 ;


@end


#endif