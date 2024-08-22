// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSGRIDACTIONMENUCONTROLLER_H
#define PXPHOTOSGRIDACTIONMENUCONTROLLER_H

@class NSArray;


#import "PXActionMenuController.h"

@interface PXPhotosGridActionMenuController : PXActionMenuController

@property (copy, nonatomic) NSArray *additionalActionTypes; // ivar: _additionalActionTypes


-(BOOL)shouldAllowPerformanceOfActionType:(id)arg0 ;
-(id)_defaultActionTypes;
-(id)availableActionTypes;
-(id)initWithActionManagers:(id)arg0 ;
-(id)initWithActionManagers:(id)arg0 selectionManager:(id)arg1 ;


@end


#endif