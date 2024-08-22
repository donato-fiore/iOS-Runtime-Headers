// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MEMAILCOMPOSETOOLBARITEMINFO_H
#define MEMAILCOMPOSETOOLBARITEMINFO_H

@class UIImage, NSString;

#import <Foundation/Foundation.h>


@interface MEMailComposeToolbarItemInfo : NSObject

@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSString *tooltip; // ivar: _tooltip


-(id)initWithLabel:(id)arg0 image:(id)arg1 tooltip:(id)arg2 ;


@end


#endif