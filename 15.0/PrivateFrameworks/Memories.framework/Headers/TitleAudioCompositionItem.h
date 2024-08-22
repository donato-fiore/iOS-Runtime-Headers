// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TITLEAUDIOCOMPOSITIONITEM_H
#define TITLEAUDIOCOMPOSITIONITEM_H

@class NSString;


#import "MovieCompositionItem.h"

@interface TitleAudioCompositionItem : MovieCompositionItem

@property (retain, nonatomic) NSString *baseFilename; // ivar: _baseFilename


-(BOOL)hasSeparateInOut;
-(id)initWithClip:(id)arg0 themeID:(id)arg1 ;
-(id)speedRangesForSourceRange:(struct ? )arg0 destinationRange:(struct ? )arg1 ;
-(void)switchToAsset:(int)arg0 ;


@end


#endif