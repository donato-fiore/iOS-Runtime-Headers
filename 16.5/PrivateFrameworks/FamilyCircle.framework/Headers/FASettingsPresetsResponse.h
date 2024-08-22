// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FASETTINGSPRESETSRESPONSE_H
#define FASETTINGSPRESETSRESPONSE_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "FASettingsPreset.h"

@interface FASettingsPresetsResponse : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *availablePresets; // ivar: _availablePresets
@property (readonly, nonatomic) FASettingsPreset *currentPreset; // ivar: _currentPreset
@property (readonly, nonatomic) FASettingsPreset *expectedPreset; // ivar: _expectedPreset


+(BOOL)supportsSecureCoding;
-(id)initWithAvailablePresets:(id)arg0 expectedPreset:(id)arg1 currentPreset:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif