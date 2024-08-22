// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUQUICKCONTROLCONTENTCHARACTERISTICWRITINGUPDATEADAPTER_H
#define HUQUICKCONTROLCONTENTCHARACTERISTICWRITINGUPDATEADAPTER_H

@class NSString, HFItemManager;
@protocol HUQuickControlContentCharacteristicWritingDelegate;

#import <Foundation/Foundation.h>

#import "_HUQuickControlContentCharacteristicWriteQueuedUpdate.h"

@interface HUQuickControlContentCharacteristicWritingUpdateAdapter : NSObject <HUQuickControlContentCharacteristicWritingDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<HUQuickControlContentCharacteristicWritingDelegate> *forwardingCharacteristicWritingDelegate; // ivar: _forwardingCharacteristicWritingDelegate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HFItemManager *itemManager; // ivar: _itemManager
@property (retain, nonatomic) _HUQuickControlContentCharacteristicWriteQueuedUpdate *queuedUpdate; // ivar: _queuedUpdate
@property (nonatomic) BOOL shouldIssueItemUpdatesOnCharacteristicOverrideValueChanges; // ivar: _shouldIssueItemUpdatesOnCharacteristicOverrideValueChanges
@property (readonly) Class superclass;


-(id)_characteristicUpdateSuppressionReasonForContent:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 ;
-(void)_executeQueuedUpdate;
-(void)dealloc;
-(void)quickControlContent:(id)arg0 didEndPossibleWritesForCharacteristics:(id)arg1 ;
-(void)quickControlContent:(id)arg0 willBeginPossibleWritesForCharacteristics:(id)arg1 ;
-(void)quickControlContentDidUpdateCharacteristicValueOverrides:(id)arg0 ;


@end


#endif