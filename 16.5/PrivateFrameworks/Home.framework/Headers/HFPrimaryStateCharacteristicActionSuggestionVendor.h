// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFPRIMARYSTATECHARACTERISTICACTIONSUGGESTIONVENDOR_H
#define HFPRIMARYSTATECHARACTERISTICACTIONSUGGESTIONVENDOR_H

@class NSString;
@protocol HFCharacteristicActionSuggestionVending;

#import <Foundation/Foundation.h>


@interface HFPrimaryStateCharacteristicActionSuggestionVendor : NSObject <HFCharacteristicActionSuggestionVending>



@property (readonly, nonatomic) NSUInteger bucketingPolicy; // ivar: _bucketingPolicy
@property (readonly, copy, nonatomic) NSString *characteristicType; // ivar: _characteristicType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *normalStateValue; // ivar: _normalStateValue
@property (readonly) Class superclass;


-(id)_bucketingValueForAction:(id)arg0 ;
-(id)initWithCharacteristicType:(id)arg0 normalStateValue:(id)arg1 ;
-(id)initWithCharacteristicType:(id)arg0 normalStateValue:(id)arg1 bucketingPolicy:(NSUInteger)arg2 ;
-(id)suggestedActionForCharacteristic:(id)arg0 candidateActions:(id)arg1 ;


@end


#endif