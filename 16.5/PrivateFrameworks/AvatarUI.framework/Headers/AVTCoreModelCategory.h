// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTCOREMODELCATEGORY_H
#define AVTCOREMODELCATEGORY_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "AVTCoreModelPairing.h"

@interface AVTCoreModelCategory : NSObject

@property (readonly, copy, nonatomic) AVTCoreModelPairing *pairing; // ivar: _pairing
@property (readonly, copy, nonatomic) NSArray *pickers; // ivar: _pickers
@property (readonly, nonatomic) NSInteger presetCategory; // ivar: _presetCategory
@property (readonly, copy, nonatomic) NSArray *presets; // ivar: _presets
@property (readonly, copy, nonatomic) NSDictionary *tags; // ivar: _tags


-(id)description;
-(id)initWithPresetCategory:(NSInteger)arg0 presets:(id)arg1 tags:(id)arg2 rows:(id)arg3 pairing:(id)arg4 ;


@end


#endif