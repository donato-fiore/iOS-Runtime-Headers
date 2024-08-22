// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMBEDDINGPATHS_H
#define EMBEDDINGPATHS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface EmbeddingPaths : NSObject

@property (readonly, nonatomic) NSString *configPath; // ivar: _configPath
@property (readonly, nonatomic) NSString *modelPath; // ivar: _modelPath
@property (readonly, nonatomic) NSString *reformulationPath; // ivar: _reformulationPath
@property (readonly, nonatomic) NSString *srcVocabPath; // ivar: _srcVocabPath


-(id)initWithSrcVocabPath:(id)arg0 modelPath:(id)arg1 configPath:(id)arg2 reformulationPath:(id)arg3 ;


@end


#endif