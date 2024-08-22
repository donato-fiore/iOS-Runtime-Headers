// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AIAUDIOGRAMMAP_H
#define AIAUDIOGRAMMAP_H


#import <Foundation/Foundation.h>

#import "AIAudiogramAxis.h"

@interface AIAudiogramMap : NSObject

@property (retain, nonatomic) AIAudiogramAxis *frequencies; // ivar: _frequencies
@property (retain, nonatomic) AIAudiogramAxis *hearingLevels; // ivar: _hearingLevels


-(id)_valueOfPoint:(struct CGPoint )arg0 betweenObject:(id)arg1 andObject:(id)arg2 onAxis:(NSUInteger)arg3 ;
-(id)description;
-(id)frequencyAtPoint:(struct CGPoint )arg0 ;
-(id)hearingLevelAtPoint:(struct CGPoint )arg0 ;
-(id)initWithFrequencies:(id)arg0 hearingLevels:(id)arg1 ;


@end


#endif