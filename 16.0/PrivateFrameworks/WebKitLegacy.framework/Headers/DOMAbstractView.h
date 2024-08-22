// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOMABSTRACTVIEW_H
#define DOMABSTRACTVIEW_H



#import "DOMObject.h"
#import "DOMDocument.h"

@interface DOMAbstractView : DOMObject

@property (readonly) DOMDocument *document;


-(void)_disconnectFrame;
-(void)dealloc;


@end


#endif