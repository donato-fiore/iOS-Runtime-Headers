// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INIMAGE_H
#define INIMAGE_H

@class NSString, NSData, NSURL;
@protocol INJSONSerializable, INKeyImageProducing, INCacheableObject, INImageProxyInjecting, INImageExport, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INImage.h"

@interface INImage : NSObject <INJSONSerializable, INKeyImageProducing, INCacheableObject, INImageProxyInjecting, INImageExport, NSCopying, NSSecureCoding>



@property (copy, nonatomic, setter=_setBundleIdentifier:) NSString *_bundleIdentifier;
@property (copy, nonatomic, setter=_setBundlePath:) NSString *_bundlePath;
@property (copy, nonatomic, setter=_setIdentifier:) NSString *_identifier; // ivar: _identifier
@property (copy, nonatomic, setter=_setImageData:) NSData *_imageData;
@property (nonatomic, setter=_setImageSize:) ? _imageSize; // ivar: _imageSize
@property (readonly, nonatomic) BOOL _isEligibleForProxying;
@property (readonly, nonatomic) BOOL _isSupportedForDonation;
@property (readonly) INImage *_keyImage;
@property (copy, nonatomic, setter=_setName:) NSString *_name;
@property (nonatomic, setter=_setPreferredScaledSize:) ? _preferredScaledSize; // ivar: _preferredScaledSize
@property (nonatomic, setter=_setRenderingMode:) NSInteger _renderingMode; // ivar: __renderingMode
@property (readonly, nonatomic) BOOL _requiresRetrieval;
@property (copy, nonatomic, setter=_setSandboxExtensionData:) NSData *_sandboxExtensionData;
@property (copy, nonatomic, setter=_setUri:) NSURL *_uri;
@property (readonly, copy, nonatomic) NSString *cacheIdentifier;
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
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=_isSystem) BOOL system;


+(BOOL)supportsSecureCoding;
+(id)_bundleImageWithURL:(id)arg0 ;
+(id)_classesInCluster;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
+(id)imageNamed:(id)arg0 ;
+(id)imageWithImageData:(id)arg0 ;
+(id)imageWithURL:(id)arg0 ;
+(id)imageWithURL:(id)arg0 width:(CGFloat)arg1 height:(CGFloat)arg2 ;
+(id)systemImageNamed:(id)arg0 ;
+(void)buildFromCachePayload:(id)arg0 identifier:(id)arg1 completion:(id)arg2 ;
+(void)initialize;
+(void)registerImageLoadersOnce;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_compareSubProducerOne:(id)arg0 subProducerTwo:(id)arg1 ;
-(id)_URLRepresentation;
-(id)_copyWithSubclass:(Class)arg0 ;
-(id)_descriptionAtIndent:(NSUInteger)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_in_downscaledImageForFilePersistence;
-(id)_in_writeableFilePersistenceConfigurationForStoreType:(NSUInteger)arg0 ;
-(id)_initWithData:(id)arg0 ;
-(id)_initWithIdentifier:(id)arg0 ;
-(id)_initWithURLRepresentation:(id)arg0 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)_intents_readableTitleWithLocalizer:(id)arg0 metadata:(id)arg1 ;
-(id)_preferredImageLoader;
-(id)_proxiedImageWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
// -(void)_injectProxiesForImages:(id)arg0 completion:(unk)arg1  ;
-(void)_loadImageDataAndSizeWithHelper:(id)arg0 accessSpecifier:(id)arg1 completion:(id)arg2 ;
-(void)_requestProxy:(id)arg0 ;
-(void)_retrieveImageDataWithReply:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)generateCachePayloadWithCompletion:(id)arg0 ;


@end


#endif