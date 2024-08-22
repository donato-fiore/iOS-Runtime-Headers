// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKVKIMAGESOURCEKEYIMAGERESULT_H
#define MKVKIMAGESOURCEKEYIMAGERESULT_H

@class NSMutableArray, NSArray, NSMutableSet;

#import <Foundation/Foundation.h>

#import "MKVKImageSourceCalculationParameters.h"

@interface MKVKImageSourceKeyImageResult : NSObject {
    NSMutableArray *_mutableFullBleedColors;
}


@property (readonly, nonatomic) NSArray *fullBleedColors;
@property (retain, nonatomic) NSMutableSet *imageDatas; // ivar: _imageDatas
@property (readonly, nonatomic) NSArray *images;
@property (retain, nonatomic) NSMutableArray *mutableImages; // ivar: _mutableImages
@property (readonly, nonatomic) MKVKImageSourceCalculationParameters *parameters; // ivar: _parameters
@property (readonly, nonatomic, getter=hasSameFullBleedColors) BOOL sameFullBleedColors; // ivar: _sameFullBleedColors
@property (retain, nonatomic) NSMutableArray *triedKeys; // ivar: _triedKeys


-(id)initWithParameters:(id)arg0 ;
-(void)addFullBleedColor:(id)arg0 ;


@end


#endif