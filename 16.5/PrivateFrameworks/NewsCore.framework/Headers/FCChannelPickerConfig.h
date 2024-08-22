// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCHANNELPICKERCONFIG_H
#define FCCHANNELPICKERCONFIG_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "FCContentColorPair.h"

@interface FCChannelPickerConfig : NSObject

@property (readonly, nonatomic) NSString *buttonTitle; // ivar: _buttonTitle
@property (readonly, nonatomic) NSString *featureName; // ivar: _featureName
@property (readonly, nonatomic) FCContentColorPair *featureTextColor; // ivar: _featureTextColor
@property (readonly, copy, nonatomic) NSArray *initialChannelIDs; // ivar: _initialChannelIDs
@property (readonly, nonatomic) NSString *pickerID; // ivar: _pickerID
@property (readonly, nonatomic) BOOL showRelatedChannels; // ivar: _showRelatedChannels
@property (readonly, nonatomic) NSString *titleText; // ivar: _titleText


-(id)initWithPickerID:(id)arg0 configDictionary:(id)arg1 ;


@end


#endif