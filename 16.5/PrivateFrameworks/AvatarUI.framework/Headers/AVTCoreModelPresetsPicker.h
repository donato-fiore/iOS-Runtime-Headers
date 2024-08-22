// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTCOREMODELPRESETSPICKER_H
#define AVTCOREMODELPRESETSPICKER_H

@class NSString, NSOrderedSet;
@protocol AVTCoreModelPicker;

#import <Foundation/Foundation.h>

#import "AVTCoreModelPickerOptions.h"
#import "AVTCoreModelPairing.h"

@interface AVTCoreModelPresetsPicker : NSObject <AVTCoreModelPicker>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) AVTCoreModelPickerOptions *options; // ivar: _options
@property (readonly, copy, nonatomic) AVTCoreModelPairing *pairing; // ivar: _pairing
@property (readonly, copy, nonatomic) NSOrderedSet *representedTags; // ivar: _representedTags
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 representedTags:(id)arg1 pairing:(id)arg2 options:(id)arg3 ;
-(id)initWithTitle:(id)arg0 representedTags:(id)arg1 pairing:(id)arg2 options:(id)arg3 identifier:(id)arg4 ;


@end


#endif