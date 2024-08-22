// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUQUICKCONTROLSIMPLEITEMUPDATER_H
#define HUQUICKCONTROLSIMPLEITEMUPDATER_H

@class NSString, HFSimpleItemManager;
@protocol HFItemManagerDelegate, HUQuickControlItemUpdating, HUQuickControlItemHosting;

#import <Foundation/Foundation.h>


@interface HUQuickControlSimpleItemUpdater : NSObject <HFItemManagerDelegate, HUQuickControlItemUpdating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<HUQuickControlItemHosting> *itemHost; // ivar: _itemHost
@property (readonly, nonatomic) HFSimpleItemManager *itemManager; // ivar: _itemManager
@property (readonly) Class superclass;


-(id)init;
-(id)initWithItemHost:(id)arg0 ;
-(void)_setExternalItemManagerUpdatesDisabled:(BOOL)arg0 ;
-(void)itemManager:(id)arg0 performUpdateRequest:(id)arg1 ;
-(void)quickControlItemHost:(id)arg0 didUpdateVisibility:(BOOL)arg1 ;


@end


#endif