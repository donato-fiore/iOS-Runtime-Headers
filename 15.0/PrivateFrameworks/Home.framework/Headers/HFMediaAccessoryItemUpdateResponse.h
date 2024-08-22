// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFMEDIAACCESSORYITEMUPDATERESPONSE_H
#define HFMEDIAACCESSORYITEMUPDATERESPONSE_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "HFCharacteristicValueDisplayMetadata.h"

@interface HFMediaAccessoryItemUpdateResponse : NSObject

@property (readonly, nonatomic) HFCharacteristicValueDisplayMetadata *displayMetadata; // ivar: _displayMetadata
@property (readonly, nonatomic) NSDictionary *standardResults; // ivar: _standardResults


-(id)initWithDisplayMetadata:(id)arg0 standardResults:(id)arg1 ;


@end


#endif