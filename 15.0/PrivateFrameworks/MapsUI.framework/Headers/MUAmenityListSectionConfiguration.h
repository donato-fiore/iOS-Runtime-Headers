// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUAMENITYLISTSECTIONCONFIGURATION_H
#define MUAMENITYLISTSECTIONCONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "MUAmenityApplePayConfiguration.h"

@interface MUAmenityListSectionConfiguration : NSObject

@property (retain, nonatomic) MUAmenityApplePayConfiguration *applePayConfiguration; // ivar: _applePayConfiguration
@property (nonatomic) NSUInteger numberInlineAmenities; // ivar: _numberInlineAmenities
@property (copy, nonatomic) NSArray *viewModels; // ivar: _viewModels




@end


#endif