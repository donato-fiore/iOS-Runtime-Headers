// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETVARIANTAUDIOATTRIBUTES_H
#define AVASSETVARIANTAUDIOATTRIBUTES_H

@class FigAlternateObjC, NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface AVAssetVariantAudioAttributes : NSObject {
    FigAlternateObjC *_figAlternateObjC;
    NSMutableDictionary *_renditionSpecificAttributesForMediaSelection;
    *OpaqueFigSimpleMutex _mutex;
}


@property (readonly, nonatomic) NSArray *formatIDs;


-(id)initWithFigAlternateObjC:(id)arg0 ;
-(id)renditionSpecificAttributesForMediaOption:(id)arg0 ;
-(void)dealloc;


@end


#endif