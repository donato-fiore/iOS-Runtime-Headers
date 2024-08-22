// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIWEBFORMSELECTPERIPHERAL_H
#define UIWEBFORMSELECTPERIPHERAL_H

@class DOMHTMLSelectElement;
@protocol UIFormPeripheral, UIWebFormControl;

#import <Foundation/Foundation.h>


@interface UIWebFormSelectPeripheral : NSObject <UIFormPeripheral>



@property (retain, nonatomic) NSObject<UIWebFormControl> *_selectControl; // ivar: _selectControl
@property (retain, nonatomic) DOMHTMLSelectElement *_selectionNode; // ivar: _selectionNode


+(id)createPeripheralWithDOMHTMLSelectElement:(id)arg0 ;
-(id)assistantView;
-(id)initWithDOMHTMLSelectElement:(id)arg0 ;
-(void)beginEditing;
-(void)dealloc;
-(void)endEditing;


@end


#endif