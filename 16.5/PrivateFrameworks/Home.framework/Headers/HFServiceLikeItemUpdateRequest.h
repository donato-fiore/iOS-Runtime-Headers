// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFSERVICELIKEITEMUPDATEREQUEST_H
#define HFSERVICELIKEITEMUPDATEREQUEST_H

@class HMAccessory, NSSet, HMService;
@protocol HFCharacteristicValueSource;

#import <Foundation/Foundation.h>


@interface HFServiceLikeItemUpdateRequest : NSObject

@property (retain, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) NSSet *characteristics; // ivar: _characteristics
@property (retain, nonatomic) HMService *service; // ivar: _service
@property (retain, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource; // ivar: _valueSource


-(id)_displayMetadataForReadResponse:(id)arg0 ;
-(id)_standardResultsForReadResponse:(id)arg0 displayMetadata:(id)arg1 batteryLevelResults:(id)arg2 updateOptions:(id)arg3 ;
-(id)init;
-(id)initWithAccessory:(id)arg0 valueSource:(id)arg1 characteristics:(id)arg2 ;
-(id)initWithService:(id)arg0 valueSource:(id)arg1 characteristics:(id)arg2 ;
-(id)updateWithOptions:(id)arg0 ;


@end


#endif