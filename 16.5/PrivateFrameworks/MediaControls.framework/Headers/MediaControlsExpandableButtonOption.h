// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MEDIACONTROLSEXPANDABLEBUTTONOPTION_H
#define MEDIACONTROLSEXPANDABLEBUTTONOPTION_H

@class UIColor, NSString;

#import <Foundation/Foundation.h>

#import "MRUAsset.h"

@interface MediaControlsExpandableButtonOption : NSObject

@property (retain, nonatomic) MRUAsset *asset; // ivar: _asset
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) id *identifier; // ivar: _identifier
@property (retain, nonatomic) UIColor *selectedBackgroundColor; // ivar: _selectedBackgroundColor
@property (retain, nonatomic) NSString *selectedState; // ivar: _selectedState
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)description;
-(id)init;


@end


#endif