// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPUITABLECELLACCESSORY_H
#define CPUITABLECELLACCESSORY_H

@class UIImage;

#import <Foundation/Foundation.h>


@interface CPUITableCellAccessory : NSObject

@property (retain, nonatomic) UIImage *image; // ivar: _image


+(id)accessoryWithActivityIndicator;
+(id)accessoryWithCloudIcon;
+(id)accessoryWithDisclosureIndicator;
+(id)accessoryWithImage:(id)arg0 ;
+(id)accessoryWithiCloudIcon;


@end


#endif