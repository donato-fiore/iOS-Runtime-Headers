// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKWEBPROCESSPLUGINNODEHANDLE_H
#define WKWEBPROCESSPLUGINNODEHANDLE_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>

#import "WKWebProcessPlugInNodeHandle.h"
#import "WKWebProcessPlugInFrame.h"

@interface WKWebProcessPlugInNodeHandle : NSObject <WKObject>

 {
    ObjectStorage<WebKit::InjectedBundleNodeHandle> _nodeHandle;
}


@property (nonatomic) BOOL HTMLInputElementIsAutoFilled;
@property (nonatomic) BOOL HTMLInputElementIsAutoFilledAndObscured;
@property (nonatomic) BOOL HTMLInputElementIsAutoFilledAndViewable;
@property (readonly, nonatomic) BOOL HTMLInputElementIsUserEdited;
@property (readonly, nonatomic) WKWebProcessPlugInNodeHandle *HTMLTableCellElementCellAbove;
@property (readonly, nonatomic) BOOL HTMLTextAreaElementIsUserEdited;
@property (readonly) *Object _apiObject;
@property (readonly) *void _nodeHandle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGRect elementBounds;
@property (readonly, nonatomic) WKWebProcessPlugInFrame *frame;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSelectElement;
@property (readonly, nonatomic) BOOL isSelectableTextNode;
@property (readonly) Class superclass;


+(id)nodeHandleWithJSValue:(id)arg0 inContext:(id)arg1 ;
-(BOOL)isHTMLInputElementAutoFillButtonEnabled;
-(BOOL)isTextField;
-(NSInteger)htmlInputElementAutoFillButtonType;
-(NSInteger)htmlInputElementLastAutoFillButtonType;
-(id)htmlIFrameElementContentFrame;
-(id)renderedImageWithOptions:(unsigned int)arg0 ;
-(id)renderedImageWithOptions:(unsigned int)arg0 width:(id)arg1 ;
-(void)dealloc;
-(void)setHTMLInputElementAutoFillButtonEnabledWithButtonType:(NSInteger)arg0 ;


@end


#endif