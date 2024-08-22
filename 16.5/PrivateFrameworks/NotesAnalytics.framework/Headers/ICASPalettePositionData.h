// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASPALETTEPOSITIONDATA_H
#define ICASPALETTEPOSITIONDATA_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASPalettePosition.h"

@interface ICASPalettePositionData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASPalettePosition *paletteEndPosition; // ivar: _paletteEndPosition
@property (readonly, nonatomic) ICASPalettePosition *paletteStartPosition; // ivar: _paletteStartPosition


+(id)dataName;
-(id)initWithPaletteStartPosition:(id)arg0 paletteEndPosition:(id)arg1 ;
-(id)toDict;


@end


#endif