// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKGREENFIELDB640WATCHFACEMODEL_H
#define NTKGREENFIELDB640WATCHFACEMODEL_H


#import <Foundation/Foundation.h>

#import "NTKGreenfieldDecodedRecipe.h"

@interface NTKGreenfieldB640WatchFaceModel : NSObject

@property (retain, nonatomic) NTKGreenfieldDecodedRecipe *decodedRecipe; // ivar: _decodedRecipe
@property (nonatomic) BOOL isSelected; // ivar: _isSelected


-(id)initWithDecodedRecipe:(id)arg0 ;


@end


#endif