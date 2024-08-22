// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGALTERNATEOBJCAUDIOATTRIBUTES_H
#define FIGALTERNATEOBJCAUDIOATTRIBUTES_H

@class NSArray;


#import "FigKVCInspectable.h"

@interface FigAlternateObjCAudioAttributes : FigKVCInspectable {
    *OpaqueFigAlternate _alternate;
    NSArray *_formatIDs;
    *OpaqueFigSimpleMutex _mutex;
}


@property (readonly, nonatomic) NSArray *formatIDs;


-(BOOL)isBinauralMediaOption:(id)arg0 ;
-(BOOL)isDownmixMediaOption:(id)arg0 ;
-(CGFloat)sampleRateForMediaOption:(id)arg0 ;
-(NSInteger)channelCountForMediaOption:(id)arg0 ;
-(id)initWithFigAlternate:(struct OpaqueFigAlternate *)arg0 ;
-(void)dealloc;


@end


#endif