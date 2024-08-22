// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBPRESET_H
#define CBPRESET_H


#import <Foundation/Foundation.h>


@interface CBPreset : NSObject

@property (readonly) BOOL autoBrighnessDisabled; // ivar: _autoBrighnessDisabled
@property (readonly) BOOL brightnessDisabled; // ivar: _brightnessDisabled
@property (readonly) BOOL nightShiftDisabled; // ivar: _nightShiftDisabled
@property (readonly) BOOL referenceMode; // ivar: _referenceMode
@property (readonly) BOOL trueToneDisabled; // ivar: _trueToneDisabled


+(id)newActive:(NSUInteger)arg0 ;
-(id)initWithCAPreset:(id)arg0 ;


@end


#endif