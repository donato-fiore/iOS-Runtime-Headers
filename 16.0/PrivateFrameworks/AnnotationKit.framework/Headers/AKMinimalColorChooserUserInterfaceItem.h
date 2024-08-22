// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKMINIMALCOLORCHOOSERUSERINTERFACEITEM_H
#define AKMINIMALCOLORCHOOSERUSERINTERFACEITEM_H

@class UIColor, NSString;
@protocol AKColorChooserUserInterfaceItem;


#import "AKMinimalUserInterfaceItem.h"

@interface AKMinimalColorChooserUserInterfaceItem : AKMinimalUserInterfaceItem <AKColorChooserUserInterfaceItem>



@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif