// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXELEMENTACTIONMANAGER_H
#define AXELEMENTACTIONMANAGER_H


#import <Foundation/Foundation.h>

#import "AXDragManager.h"

@interface AXElementActionManager : NSObject

@property (readonly, nonatomic) AXDragManager *dragManager; // ivar: _dragManager
@property (readonly, nonatomic) BOOL isDragActive;
@property (nonatomic) BOOL shouldIncludeMedusaActions; // ivar: _shouldIncludeMedusaActions


-(BOOL)canShowActionsForElement:(id)arg0 ;
-(BOOL)performAction:(id)arg0 ;
-(id)actionsForElement:(id)arg0 ;
-(id)initWithDragManager:(id)arg0 ;
-(id)initWithDragServiceName:(id)arg0 ;


@end


#endif