// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFINCREMENTALSTATECHARACTERISTICACTIONSUGGESTIONVENDOR_H
#define HFINCREMENTALSTATECHARACTERISTICACTIONSUGGESTIONVENDOR_H

@class NSString;
@protocol HFCharacteristicActionSuggestionVending;

#import <Foundation/Foundation.h>


@interface HFIncrementalStateCharacteristicActionSuggestionVendor : NSObject <HFCharacteristicActionSuggestionVending>



@property (readonly, copy, nonatomic) NSString *characteristicType; // ivar: _characteristicType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCharacteristicType:(id)arg0 ;
-(id)suggestedActionForCharacteristic:(id)arg0 candidateActions:(id)arg1 ;


@end


#endif