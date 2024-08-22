// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKMINIMALINKCHOOSERUSERINTERFACEITEM_H
#define AKMINIMALINKCHOOSERUSERINTERFACEITEM_H

@class NSString, PKInk;
@protocol AKInkChooserUserInterfaceItem;


#import "AKMinimalUserInterfaceItem.h"

@interface AKMinimalInkChooserUserInterfaceItem : AKMinimalUserInterfaceItem <AKInkChooserUserInterfaceItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKInk *ink; // ivar: _ink
@property (readonly) Class superclass;




@end


#endif