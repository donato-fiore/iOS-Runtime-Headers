// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFMEDIAACCESSORYITEMUPDATEREQUEST_H
#define HFMEDIAACCESSORYITEMUPDATEREQUEST_H

@class HMHome;
@protocol HFMediaProfileContainer, HFMediaValueSource, HFCharacteristicValueSource;

#import <Foundation/Foundation.h>


@interface HFMediaAccessoryItemUpdateRequest : NSObject

@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfile; // ivar: _mediaProfile
@property (readonly, nonatomic) NSObject<HFMediaValueSource> *mediaValueSource; // ivar: _mediaValueSource
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource; // ivar: _valueSource


-(id)_disambiguateMultipleAccessoryResponses:(id)arg0 forMediaSystem:(id)arg1 ;
-(id)_parentMediaSystem;
-(id)accessories;
-(id)init;
-(id)initWithMediaProfileContainer:(id)arg0 valueSource:(id)arg1 ;
-(id)updateWithOptions:(id)arg0 ;
-(void)_appendRestartStatusMessageForAccessory:(id)arg0 toResults:(id)arg1 ;
-(void)_appendSplitMediaAccountWarningForAccessory:(id)arg0 toResults:(id)arg1 ;
-(void)_appendSplitMediaAccountWarningIfNeededForAccessory:(id)arg0 toResults:(id)arg1 ;


@end


#endif