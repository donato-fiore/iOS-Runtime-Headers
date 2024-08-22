// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUGRIDSERVICECELLTEXTCONFIGURATION_H
#define HUGRIDSERVICECELLTEXTCONFIGURATION_H

@class UIColor, UIVisualEffect, HFServiceNameComponents;
@protocol HFStringGenerator;

#import <Foundation/Foundation.h>


@interface HUGridServiceCellTextConfiguration : NSObject

@property (retain, nonatomic) NSObject<HFStringGenerator> *descriptionText; // ivar: _descriptionText
@property (retain, nonatomic) UIColor *descriptionTextColor; // ivar: _descriptionTextColor
@property (retain, nonatomic) UIVisualEffect *descriptionTextEffect; // ivar: _descriptionTextEffect
@property (retain, nonatomic) HFServiceNameComponents *nameComponents; // ivar: _nameComponents
@property (retain, nonatomic) UIColor *nameTextColor; // ivar: _nameTextColor




@end


#endif