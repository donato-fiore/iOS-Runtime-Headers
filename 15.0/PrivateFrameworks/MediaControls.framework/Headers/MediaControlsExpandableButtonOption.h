// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MEDIACONTROLSEXPANDABLEBUTTONOPTION_H
#define MEDIACONTROLSEXPANDABLEBUTTONOPTION_H

@class NSString, UIColor;

#import <Foundation/Foundation.h>


@interface MediaControlsExpandableButtonOption : NSObject

@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *packageName; // ivar: _packageName
@property (retain, nonatomic) UIColor *selectedBackgroundColor; // ivar: _selectedBackgroundColor
@property (nonatomic) BOOL supportsAnimation; // ivar: _supportsAnimation
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)description;


@end


#endif