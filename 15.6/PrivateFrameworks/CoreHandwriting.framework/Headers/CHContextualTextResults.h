// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHCONTEXTUALTEXTRESULTS_H
#define CHCONTEXTUALTEXTRESULTS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CHContextualTextResults : NSObject

@property (retain, nonatomic) NSArray *textResults; // ivar: _textResults


-(id)initWithTextResults:(id)arg0 ;
-(id)textResultToIndexMappingFromTopTranscriptionWithCharacterRange:(struct _NSRange )arg0 intersectionRanges:(*id)arg1 ;
-(id)topTranscription;


@end


#endif