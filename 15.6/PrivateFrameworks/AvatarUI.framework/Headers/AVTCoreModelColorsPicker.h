// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTCOREMODELCOLORSPICKER_H
#define AVTCOREMODELCOLORSPICKER_H

@class NSString, NSArray;
@protocol AVTCoreModelPicker;

#import <Foundation/Foundation.h>

#import "AVTCoreModelPickerOptions.h"
#import "AVTCoreModelPairing.h"

@interface AVTCoreModelColorsPicker : NSObject <AVTCoreModelPicker>



@property (readonly, nonatomic) BOOL alwaysShowExtended; // ivar: _alwaysShowExtended
@property (readonly, nonatomic) NSInteger colorCategory; // ivar: _colorCategory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger destination; // ivar: _destination
@property (readonly, nonatomic) NSArray *extendedColors; // ivar: _extendedColors
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) AVTCoreModelPickerOptions *options; // ivar: _options
@property (readonly, copy, nonatomic) AVTCoreModelPairing *pairing; // ivar: _pairing
@property (readonly, nonatomic) NSArray *primaryColors; // ivar: _primaryColors
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEmpty;
-(id)initWithTitle:(id)arg0 primaryColors:(id)arg1 extendedColors:(id)arg2 alwaysShowExtended:(BOOL)arg3 colorCategory:(NSInteger)arg4 destination:(NSInteger)arg5 pairing:(id)arg6 options:(id)arg7 ;
-(id)initWithTitle:(id)arg0 primaryColors:(id)arg1 extendedColors:(id)arg2 identifier:(id)arg3 alwaysShowExtended:(BOOL)arg4 colorCategory:(NSInteger)arg5 destination:(NSInteger)arg6 pairing:(id)arg7 options:(id)arg8 ;


@end


#endif