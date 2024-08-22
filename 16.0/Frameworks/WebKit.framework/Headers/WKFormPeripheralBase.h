// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKFORMPERIPHERALBASE_H
#define WKFORMPERIPHERALBASE_H

@protocol WKFormPeripheral, WKFormControl;

#import <Foundation/Foundation.h>

#import "WKContentView.h"

@interface WKFormPeripheralBase : NSObject <WKFormPeripheral>

 {
    RetainPtr<NSObject<WKFormControl>> _control;
}


@property (readonly, nonatomic) NSObject<WKFormControl> *control;
@property (readonly, nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (nonatomic) BOOL singleTapShouldEndEditing; // ivar: _singleTapShouldEndEditing
@property (readonly, nonatomic) WKContentView *view; // ivar: _view


-(BOOL)handleKeyEvent:(id)arg0 ;
-(id)assistantView;
-(id)initWithView:(id)arg0 control:(*void)arg1 ;
-(void)beginEditing;
-(void)endEditing;


@end


#endif