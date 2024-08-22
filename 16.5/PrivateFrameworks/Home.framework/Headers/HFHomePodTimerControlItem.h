// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFHOMEPODTIMERCONTROLITEM_H
#define HFHOMEPODTIMERCONTROLITEM_H

@class NSString;
@protocol NAIdentifiable, HFMediaProfileContainer;


#import "HFControlItem.h"
#import "HFHomeKitSettingsValueManager.h"

@interface HFHomePodTimerControlItem : HFControlItem <NAIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer
@property (readonly) Class superclass;
@property (readonly, nonatomic) HFHomeKitSettingsValueManager *valueManager;


+(Class)valueClass;
+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(id)characteristicValuesForValue:(id)arg0 ;
-(id)copyWithCharacteristicOptions:(id)arg0 valueSource:(id)arg1 ;
-(id)initWithMediaProfileContainer:(id)arg0 displayResults:(id)arg1 ;
-(id)initWithValueSource:(id)arg0 characteristicOptions:(id)arg1 displayResults:(id)arg2 ;
-(id)normalizedValueForValue:(id)arg0 ;
-(id)readValueAndPopulateStandardResults;
-(id)resultsForBatchReadResponse:(id)arg0 ;
-(id)valueForCharacteristicValues:(id)arg0 ;


@end


#endif