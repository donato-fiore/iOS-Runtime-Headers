// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUQUICKCONTROLVIEWCONTROLLERCONFIGURATION_H
#define HUQUICKCONTROLVIEWCONTROLLERCONFIGURATION_H

@class HMHome;
@protocol HUQuickControlItemUpdating, HFCharacteristicValueSource;

#import <Foundation/Foundation.h>


@interface HUQuickControlViewControllerConfiguration : NSObject

@property (nonatomic) BOOL copyItems; // ivar: _copyItems
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSObject<HUQuickControlItemUpdating> *itemUpdater; // ivar: _itemUpdater
@property (retain, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource; // ivar: _valueSource


-(id)initWithHome:(id)arg0 ;
-(id)initWithMediaRoutingIdentifier:(id)arg0 ;


@end


#endif