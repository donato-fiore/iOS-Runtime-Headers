// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VTKEYWORDDETECTORPHRASESCORE_H
#define VTKEYWORDDETECTORPHRASESCORE_H


#import <Foundation/Foundation.h>


@interface VTKeywordDetectorPhraseScore : NSObject

@property (nonatomic) NSUInteger phraseId; // ivar: _phraseId
@property (nonatomic) float score; // ivar: _score


-(id)initWithPhraseId:(NSUInteger)arg0 withScore:(float)arg1 ;


@end


#endif