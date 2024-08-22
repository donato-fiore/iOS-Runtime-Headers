// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKTOOLBARVIEWCONTROLLER_H
#define AKTOOLBARVIEWCONTROLLER_H

@class UIViewController;


#import "AKController.h"

@interface AKToolbarViewController : UIViewController

@property (weak) AKController *controller; // ivar: _controller
@property (readonly) BOOL isPresentingPopover;


+(NSInteger)buttonTypeForToolbarButtonItemOfType:(NSUInteger)arg0 ;
+(id)_imageNameForToolbarButtonItemOfType:(NSUInteger)arg0 ;
+(id)alternateImageForToolbarButtonItemOfType:(NSUInteger)arg0 ;
+(id)imageForToolbarButtonItemOfType:(NSUInteger)arg0 ;
+(id)titleForToolbarButtonItemOfType:(NSUInteger)arg0 ;
-(id)_toolbarButtonItemOfType:(NSUInteger)arg0 ;
-(id)initWithController:(id)arg0 ;
-(void)revalidateItems;
-(void)setFillColorUIDisplayToColor:(id)arg0 ;
-(void)setStrokeColorUIDisplayToColor:(id)arg0 ;
-(void)teardown;


@end


#endif