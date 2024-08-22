// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFMENU_H
#define WFMENU_H

@class NSArray, UIMenu, NSString;

#import <Foundation/Foundation.h>


@interface WFMenu : NSObject

@property (readonly, nonatomic) NSArray *elements; // ivar: _elements
@property (readonly, nonatomic) UIMenu *platformMenu;
@property (nonatomic) BOOL shouldDisplayInFixedOrder; // ivar: _shouldDisplayInFixedOrder
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)initWithElements:(id)arg0 ;
-(id)initWithTitle:(id)arg0 elements:(id)arg1 ;
-(id)uiMenuElementForWFMenuElement:(id)arg0 shouldShowState:(BOOL)arg1 ;


@end


#endif