// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INGETSETTINGRESPONSEDATA_H
#define INGETSETTINGRESPONSEDATA_H

@class NSString;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INNumericSettingValue.h"
#import "INSettingMetadata.h"

@interface INGetSettingResponseData : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger binaryValue; // ivar: _binaryValue
@property (readonly, nonatomic) NSInteger boundedValue; // ivar: _boundedValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *labeledValue; // ivar: _labeledValue
@property (readonly, copy, nonatomic) INNumericSettingValue *numericValue; // ivar: _numericValue
@property (readonly, copy, nonatomic) INSettingMetadata *settingMetadata; // ivar: _settingMetadata
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSettingMetadata:(id)arg0 numericValue:(id)arg1 boundedValue:(NSInteger)arg2 binaryValue:(NSInteger)arg3 labeledValue:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif