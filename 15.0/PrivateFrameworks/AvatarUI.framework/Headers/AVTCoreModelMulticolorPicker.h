// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTCOREMODELMULTICOLORPICKER_H
#define AVTCOREMODELMULTICOLORPICKER_H

@class NSString, NSDictionary, NSArray;
@protocol AVTCoreModelPicker;

#import <Foundation/Foundation.h>

#import "AVTCoreModelMulticolorAuxiliaryPicker.h"
#import "AVTCoreModelPickerOptions.h"
#import "AVTCoreModelPairing.h"

@interface AVTCoreModelMulticolorPicker : NSObject <AVTCoreModelPicker>



@property (readonly, nonatomic) BOOL allowsRemoval; // ivar: _allowsRemoval
@property (readonly, nonatomic) AVTCoreModelMulticolorAuxiliaryPicker *auxiliaryPicker; // ivar: _auxiliaryPicker
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger initialState; // ivar: _initialState
@property (readonly, nonatomic) NSDictionary *nestedPresetPickers; // ivar: _nestedPresetPickers
@property (readonly, nonatomic) AVTCoreModelPickerOptions *options; // ivar: _options
@property (readonly, copy, nonatomic) AVTCoreModelPairing *pairing; // ivar: _pairing
@property (readonly, nonatomic) NSArray *subpickers; // ivar: _subpickers
@property (readonly, nonatomic) NSArray *subtitles; // ivar: _subtitles
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithIdentifier:(id)arg0 title:(id)arg1 subpickers:(id)arg2 subtitles:(id)arg3 nestedPresetPickers:(id)arg4 auxiliaryPicker:(id)arg5 initialState:(NSInteger)arg6 allowsRemoval:(BOOL)arg7 options:(id)arg8 ;
-(id)initWithTitle:(id)arg0 subpickers:(id)arg1 subtitles:(id)arg2 nestedPresetPickers:(id)arg3 auxiliaryPicker:(id)arg4 initialState:(NSInteger)arg5 allowsRemoval:(BOOL)arg6 options:(id)arg7 ;


@end


#endif