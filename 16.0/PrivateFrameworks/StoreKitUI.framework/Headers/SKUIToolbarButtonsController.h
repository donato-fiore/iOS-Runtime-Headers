// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUITOOLBARBUTTONSCONTROLLER_H
#define SKUITOOLBARBUTTONSCONTROLLER_H

@class NSMapTable;

#import <Foundation/Foundation.h>

#import "SKUIToolbarViewElement.h"

@interface SKUIToolbarButtonsController : NSObject {
    NSMapTable *_buttonItemElements;
    SKUIToolbarViewElement *_toolbarElement;
}




-(id)addButtonItemWithButtonViewElement:(id)arg0 ;
-(id)initWithToolbarViewElement:(id)arg0 ;
-(void)_buttonAction:(id)arg0 ;
-(void)_updateButtonItem:(id)arg0 withButtonViewElement:(id)arg1 ;
-(void)disconnectAllButtons;


@end


#endif