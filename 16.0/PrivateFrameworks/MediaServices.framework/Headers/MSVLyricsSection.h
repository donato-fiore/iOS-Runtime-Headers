// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSVLYRICSSECTION_H
#define MSVLYRICSSECTION_H

@class NSArray, NSString;


#import "MSVLyricsElement.h"

@interface MSVLyricsSection : MSVLyricsElement

@property (retain, nonatomic) NSArray *lines; // ivar: _lines
@property (nonatomic) NSInteger songPart; // ivar: _songPart
@property (copy, nonatomic) NSString *songPartText; // ivar: _songPartText


+(NSInteger)_songPartForText:(id)arg0 ;
-(id)description;
-(id)init;


@end


#endif