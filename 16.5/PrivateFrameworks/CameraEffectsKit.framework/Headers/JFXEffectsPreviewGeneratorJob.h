// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXEFFECTSPREVIEWGENERATORJOB_H
#define JFXEFFECTSPREVIEWGENERATORJOB_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface JFXEffectsPreviewGeneratorJob : NSObject

@property (readonly, nonatomic) NSArray *callbackKeys; // ivar: _callbackKeys
@property (readonly, nonatomic) NSArray *outputNodes; // ivar: _outputNodes


-(id)init;
-(id)initWithRenderOutputs:(id)arg0 callbackKeys:(id)arg1 ;


@end


#endif