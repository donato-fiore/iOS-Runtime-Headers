// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HFITEMMANAGERDEBUGSTATEDUMPCONTROLLER_H
#define _HFITEMMANAGERDEBUGSTATEDUMPCONTROLLER_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface _HFItemManagerDebugStateDumpController : NSObject

@property (retain, nonatomic) NSHashTable *itemManagers; // ivar: _itemManagers


+(id)sharedInstance;
-(id)_performStateDump;
-(id)init;
-(void)registerItemManager:(id)arg0 ;


@end


#endif