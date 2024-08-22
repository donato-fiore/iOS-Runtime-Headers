// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITEXTLAYOUTCONTROLLERBASE_H
#define _UITEXTLAYOUTCONTROLLERBASE_H

@class NSTextContainer;

#import <Foundation/Foundation.h>

#import "_UITextInputControllerLayoutManagerConnection.h"
#import "UITextRange.h"

@interface _UITextLayoutControllerBase : NSObject {
    _UITextInputControllerLayoutManagerConnection *_textInputControllerConnection;
    Class _classicCanvasViewClass;
}


@property (nonatomic, getter=isDocumentObscured) BOOL documentObscured; // ivar: _documentObscured
@property (readonly, nonatomic) NSTextContainer *firstTextContainer;
@property (retain, nonatomic) UITextRange *unobscuredRange; // ivar: _unobscuredRange


-(void)adoptTextInputController:(id)arg0 ;
-(void)detachFromTextInputController;


@end


#endif