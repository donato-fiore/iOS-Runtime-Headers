// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIKEYSHORTCUTHUDMENUELEMENT_H
#define _UIKEYSHORTCUTHUDMENUELEMENT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UIMenuElement.h"

@interface _UIKeyShortcutHUDMenuElement : NSObject

@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UIMenuElement *uiMenuElement; // ivar: _uiMenuElement


+(id)elementWithUIMenuElement:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
// -(void)_acceptMenuVisit:(id)arg0 shortcutVisit:(unk)arg1  ;


@end


#endif