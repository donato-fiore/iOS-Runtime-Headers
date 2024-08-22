// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VTKEYWORDDETECTORRESULTS_H
#define VTKEYWORDDETECTORRESULTS_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "VTKeywordDetectorPhraseScore.h"

@interface VTKeywordDetectorResults : NSObject

@property (retain, nonatomic) VTKeywordDetectorPhraseScore *bestResult; // ivar: _bestResult
@property (retain, nonatomic) NSArray *nBestResults; // ivar: _nBestResults


-(NSUInteger)_getBestResultIdx:(id)arg0 ;
-(id)initWithResultArray:(id)arg0 ;


@end


#endif