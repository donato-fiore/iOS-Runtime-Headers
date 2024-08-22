// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETVARIANTAUDIORENDITIONSPECIFICATTRIBUTES_H
#define AVASSETVARIANTAUDIORENDITIONSPECIFICATTRIBUTES_H

@class FigAlternateObjC;

#import <Foundation/Foundation.h>

#import "AVMediaSelectionOption.h"

@interface AVAssetVariantAudioRenditionSpecificAttributes : NSObject {
    FigAlternateObjC *_figAlternateObjC;
    AVMediaSelectionOption *_mediaSelectionOption;
}


@property (readonly, nonatomic) NSInteger channelCount;


-(id)initWithFigAlternateObjC:(id)arg0 mediaSelectionOption:(id)arg1 ;
-(void)dealloc;


@end


#endif