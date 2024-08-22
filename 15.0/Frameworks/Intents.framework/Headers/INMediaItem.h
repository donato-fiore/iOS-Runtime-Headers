// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INMEDIAITEM_H
#define INMEDIAITEM_H

@class NSString, NSDictionary;
@protocol INKeyImageProducing, INImageProxyInjecting, INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INImage.h"
#import "INPrivateMediaItemValueData.h"

@interface INMediaItem : NSObject <INKeyImageProducing, INImageProxyInjecting, INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly) INImage *_keyImage;
@property (readonly, copy, nonatomic) NSString *artist; // ivar: _artist
@property (copy, nonatomic) INImage *artwork; // ivar: _artwork
@property (readonly, copy, nonatomic) NSString *assetInfo; // ivar: _assetInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSDictionary *namedEntities; // ivar: _namedEntities
@property (copy, nonatomic) INPrivateMediaItemValueData *privateMediaItemValueData; // ivar: _privateMediaItemValueData
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSDictionary *topics; // ivar: _topics
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_compareSubProducerOne:(id)arg0 subProducerTwo:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_intents_cacheableObjects;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)_intents_readableTitleWithLocalizer:(id)arg0 metadata:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 type:(NSInteger)arg2 artwork:(id)arg3 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 type:(NSInteger)arg2 artwork:(id)arg3 artist:(id)arg4 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 type:(NSInteger)arg2 artwork:(id)arg3 artist:(id)arg4 topics:(id)arg5 namedEntities:(id)arg6 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 type:(NSInteger)arg2 artwork:(id)arg3 artist:(id)arg4 topics:(id)arg5 namedEntities:(id)arg6 assetInfo:(id)arg7 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 type:(NSInteger)arg2 artwork:(id)arg3 artist:(id)arg4 topics:(id)arg5 namedEntities:(id)arg6 privateMediaItemValueData:(id)arg7 ;
-(id)spokenPhrase;
// -(void)_injectProxiesForImages:(id)arg0 completion:(unk)arg1  ;
-(void)_intents_updateContainerWithCache:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif