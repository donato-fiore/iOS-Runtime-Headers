// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFCHARACTERISTICEVENTBUILDER_H
#define HFCHARACTERISTICEVENTBUILDER_H

@class HMCharacteristic, NSString;
@protocol NAEquatable;


#import "HFEventBuilder.h"

@interface HFCharacteristicEventBuilder : HFEventBuilder <NAEquatable>



@property (readonly, nonatomic) HMCharacteristic *characteristic; // ivar: _characteristic
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)characteristicEventBuildersForEvents:(id)arg0 inHome:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)wouldFireForCharacteristic:(id)arg0 value:(id)arg1 ;
-(id)_initWithCharacteristic:(id)arg0 ;
-(id)_initWithEvent:(id)arg0 ;
-(id)eventType;
-(id)triggeringValues;
-(void)copyValuesFromCharacteristicEventBuilder:(id)arg0 ;


@end


#endif