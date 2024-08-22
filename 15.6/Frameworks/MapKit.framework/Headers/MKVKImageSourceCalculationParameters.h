// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKVKIMAGESOURCECALCULATIONPARAMETERS_H
#define MKVKIMAGESOURCECALCULATIONPARAMETERS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MKVKImageSourceCalculationParameters : NSObject

@property (readonly, copy, nonatomic) NSArray *imageSourceKeys; // ivar: _imageSourceKeys
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale


-(id)initWithImageSourceKeys:(id)arg0 scale:(CGFloat)arg1 ;


@end


#endif