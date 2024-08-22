// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFMEDIACONTROLITEM_H
#define HFMEDIACONTROLITEM_H

@class NSString;
@protocol HFTogglableControlItem, HFMediaProfileContainer, HFMediaValueSource;


#import "HFControlItem.h"
#import "HFMediaActionSetting.h"

@interface HFMediaControlItem : HFControlItem <HFTogglableControlItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger mediaAccessoryItemType; // ivar: _mediaAccessoryItemType
@property (retain, nonatomic) HFMediaActionSetting *mediaActionSetting; // ivar: _mediaActionSetting
@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer
@property (copy, nonatomic) NSString *mediaRoutingIdentifier; // ivar: _mediaRoutingIdentifier
@property (readonly, nonatomic) NSObject<HFMediaValueSource> *mediaValueSource; // ivar: _mediaValueSource
@property (readonly) Class superclass;


+(Class)valueClass;
-(NSInteger)mapToHMMediaPlaybackState:(NSInteger)arg0 ;
-(NSInteger)sortPriority;
-(NSInteger)toggledSceneStateFromPrimaryState:(NSInteger)arg0 ;
-(id)characteristicValuesForValue:(id)arg0 ;
-(id)copyWithCharacteristicOptions:(id)arg0 valueSource:(id)arg1 ;
-(id)initWithMediaRoutingIdentifier:(id)arg0 deviceName:(id)arg1 mediaAccessoryItemType:(NSInteger)arg2 ;
-(id)initWithValueSource:(id)arg0 characteristicOptions:(id)arg1 displayResults:(id)arg2 ;
-(id)initWithValueSource:(id)arg0 mediaProfileContainer:(id)arg1 mediaAccessoryItemType:(NSInteger)arg2 displayResults:(id)arg3 ;
-(id)normalizedValueForValue:(id)arg0 ;
-(id)readValueAndPopulateStandardResults;
-(id)toggleValue;
-(id)valueForCharacteristicValues:(id)arg0 ;
-(id)writePrimaryState:(NSInteger)arg0 ;
-(id)writeValue:(id)arg0 ;


@end


#endif