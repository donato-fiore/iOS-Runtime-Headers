// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFACTIONSETSERVICESUGGESTIONMETADATA_H
#define HFACTIONSETSERVICESUGGESTIONMETADATA_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface HFActionSetServiceSuggestionMetadata : NSObject

@property (readonly, nonatomic) NSString *primaryCharacteristicType; // ivar: _primaryCharacteristicType
@property (readonly, nonatomic) NSArray *secondaryCharacteristicTypes; // ivar: _secondaryCharacteristicTypes
@property (readonly, nonatomic) NSString *serviceType; // ivar: _serviceType


+(id)metadataForServiceType:(id)arg0 ;
-(id)initWithServiceType:(id)arg0 primaryCharacteristicType:(id)arg1 secondaryCharacteristicTypes:(id)arg2 ;


@end


#endif