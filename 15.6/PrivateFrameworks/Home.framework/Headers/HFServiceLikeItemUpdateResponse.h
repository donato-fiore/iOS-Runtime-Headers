// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFSERVICELIKEITEMUPDATERESPONSE_H
#define HFSERVICELIKEITEMUPDATERESPONSE_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "HFCharacteristicValueDisplayMetadata.h"
#import "HFCharacteristicBatchReadResponse.h"

@interface HFServiceLikeItemUpdateResponse : NSObject

@property (readonly, nonatomic) HFCharacteristicValueDisplayMetadata *displayMetadata; // ivar: _displayMetadata
@property (readonly, nonatomic) HFCharacteristicBatchReadResponse *readResponse; // ivar: _readResponse
@property (readonly, nonatomic) NSDictionary *standardResults; // ivar: _standardResults


-(id)initWithDisplayMetadata:(id)arg0 readResponse:(id)arg1 standardResults:(id)arg2 ;


@end


#endif