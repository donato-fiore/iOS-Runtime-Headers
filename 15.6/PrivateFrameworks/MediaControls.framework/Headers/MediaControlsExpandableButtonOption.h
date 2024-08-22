// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MEDIACONTROLSEXPANDABLEBUTTONOPTION_H
#define MEDIACONTROLSEXPANDABLEBUTTONOPTION_H

@class NSString, UIColor;

#import <Foundation/Foundation.h>


@interface MediaControlsExpandableButtonOption : NSObject

@property (nonatomic) BOOL animateWhileSelected; // ivar: _animateWhileSelected
@property (retain, nonatomic) id *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *packageName; // ivar: _packageName
@property (retain, nonatomic) UIColor *selectedBackgroundColor; // ivar: _selectedBackgroundColor
@property (retain, nonatomic) NSString *selectedState; // ivar: _selectedState
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)description;


@end


#endif