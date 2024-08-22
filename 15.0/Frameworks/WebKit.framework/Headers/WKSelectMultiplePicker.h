// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKSELECTMULTIPLEPICKER_H
#define WKSELECTMULTIPLEPICKER_H

@class NSString;
@protocol UIPopoverPresentationControllerDelegate, WKFormControl;

#import <Foundation/Foundation.h>

#import "WKContentView.h"

@interface WKSelectMultiplePicker : NSObject <UIPopoverPresentationControllerDelegate, WKFormControl>

 {
    WKContentView *_view;
    RetainPtr<UINavigationController> _navigationController;
    RetainPtr<WKSelectPickerTableViewController> _tableViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_indexPathForRow:(NSInteger)arg0 ;
-(id)controlView;
-(id)initWithView:(id)arg0 ;
-(void)configurePresentation;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)selectRow:(NSInteger)arg0 inComponent:(NSInteger)arg1 extendingSelection:(BOOL)arg2 ;


@end


#endif