// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INDEVICEDETAIL_H
#define INDEVICEDETAIL_H

@class NSString;
@protocol INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INSpeakableString.h"
#import "INPerson.h"

@interface INDeviceDetail : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) INSpeakableString *category; // ivar: _category
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger deviceClass; // ivar: _deviceClass
@property (readonly, copy, nonatomic) INSpeakableString *deviceName; // ivar: _deviceName
@property (readonly, copy, nonatomic) INPerson *deviceOwner; // ivar: _deviceOwner
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) INSpeakableString *productName; // ivar: _productName
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_cacheableObjects;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 deviceName:(id)arg1 deviceClass:(NSInteger)arg2 productName:(id)arg3 category:(id)arg4 deviceOwner:(id)arg5 ;
-(void)_intents_updateContainerWithCache:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif