// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUAMENITYAPPLEPAYCONFIGURATION_H
#define MUAMENITYAPPLEPAYCONFIGURATION_H

@protocol MUAmenityItemViewModel;

#import <Foundation/Foundation.h>


@interface MUAmenityApplePayConfiguration : NSObject

@property (retain, nonatomic) NSObject<MUAmenityItemViewModel> *applePayRowAmenity; // ivar: _applePayRowAmenity
@property (nonatomic) BOOL showApplePayIcons; // ivar: _showApplePayIcons


+(id)configurationFromAmenityItem:(id)arg0 ;


@end


#endif