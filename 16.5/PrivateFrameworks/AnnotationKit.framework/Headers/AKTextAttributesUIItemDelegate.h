// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKTEXTATTRIBUTESUIITEMDELEGATE_H
#define AKTEXTATTRIBUTESUIITEMDELEGATE_H

@class NSString;
@protocol AKUserInterfaceItem, AKTextAttributesUserInterfaceItem;

#import <Foundation/Foundation.h>

#import "AKTextAttributesViewController.h"

@interface AKTextAttributesUIItemDelegate : NSObject <AKUserInterfaceItem, AKTextAttributesUserInterfaceItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) AKTextAttributesViewController *parentController; // ivar: _parentController
@property (readonly) Class superclass;


-(NSInteger)tag;
-(id)convertTextAttributes:(id)arg0 ;
-(void)syncTextAttributesToUI:(id)arg0 ;


@end


#endif