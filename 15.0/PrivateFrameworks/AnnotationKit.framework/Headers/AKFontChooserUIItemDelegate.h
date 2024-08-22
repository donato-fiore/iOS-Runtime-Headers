// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKFONTCHOOSERUIITEMDELEGATE_H
#define AKFONTCHOOSERUIITEMDELEGATE_H

@class NSString;
@protocol AKUserInterfaceItem, AKFontChooserUserInterfaceItem;

#import <Foundation/Foundation.h>

#import "AKTextAttributesViewController.h"

@interface AKFontChooserUIItemDelegate : NSObject <AKUserInterfaceItem, AKFontChooserUserInterfaceItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) AKTextAttributesViewController *parentController; // ivar: _parentController
@property (readonly) Class superclass;


-(NSInteger)tag;
-(id)convertFont:(id)arg0 ;
-(void)syncFontsToUI:(id)arg0 ;


@end


#endif