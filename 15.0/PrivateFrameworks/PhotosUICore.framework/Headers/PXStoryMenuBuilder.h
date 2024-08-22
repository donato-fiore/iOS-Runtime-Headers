// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYMENUBUILDER_H
#define PXSTORYMENUBUILDER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PXStoryMenuBuilder : NSObject

@property (readonly, nonatomic) NSMutableArray *menuItems; // ivar: _menuItems


+(id)_menuWithConfiguration:(id)arg0 ;
+(id)menuWithDeferredConfiguration:(id)arg0 ;
-(id)init;
-(void)_addMenuItem:(id)arg0 ;
-(void)addItemWithTitle:(id)arg0 systemImageName:(id)arg1 handler:(id)arg2 ;
-(void)addItemWithTitle:(id)arg0 systemImageName:(id)arg1 options:(NSUInteger)arg2 handler:(id)arg3 ;
-(void)addItemWithTitle:(id)arg0 systemImageName:(id)arg1 state:(NSInteger)arg2 options:(NSUInteger)arg3 handler:(id)arg4 ;
-(void)addItemWithTitle:(id)arg0 systemImageName:(id)arg1 submenuConfiguration:(id)arg2 ;
-(void)addSectionWithConfiguration:(id)arg0 ;


@end


#endif