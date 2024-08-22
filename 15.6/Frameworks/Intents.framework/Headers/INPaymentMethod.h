// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INPAYMENTMETHOD_H
#define INPAYMENTMETHOD_H

@class NSString;
@protocol INCodableAttributeRelationComparing, INCacheableContainer, INKeyImageProducing, INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INImage.h"

@interface INPaymentMethod : NSObject <INCodableAttributeRelationComparing, INCacheableContainer, INKeyImageProducing, INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly) INImage *_keyImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) INImage *icon; // ivar: _icon
@property (readonly, copy, nonatomic) NSString *identificationHint; // ivar: _identificationHint
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
+(id)applePayPaymentMethod;
-(BOOL)_intents_compareValue:(id)arg0 relation:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_compareSubProducerOne:(id)arg0 subProducerTwo:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_intents_cacheableObjects;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)_intents_localizedCopyWithLocalizer:(id)arg0 ;
-(id)_intents_readableTitleWithLocalizer:(id)arg0 metadata:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 name:(id)arg1 identificationHint:(id)arg2 icon:(id)arg3 ;
// -(void)_injectProxiesForImages:(id)arg0 completion:(unk)arg1  ;
-(void)_intents_updateContainerWithCache:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif