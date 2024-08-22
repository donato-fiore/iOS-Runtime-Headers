// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INREMOTEIMAGEPROXY_H
#define INREMOTEIMAGEPROXY_H

@class NSString;


#import "INImage.h"

@interface INRemoteImageProxy : INImage

@property (copy, nonatomic, setter=_setProxyIdentifier:) NSString *_proxyIdentifier; // ivar: _proxyIdentifier
@property (copy, nonatomic, setter=_setStorageServiceIdentifier:) NSString *_storageServiceIdentifier; // ivar: _storageServiceIdentifier
@property (readonly, nonatomic) BOOL isValid;


+(BOOL)supportsSecureCoding;
+(id)proxyImageSynchronously:(id)arg0 usingService:(id)arg1 error:(*id)arg2 ;
+(id)requestProxyByStoringImage:(id)arg0 qualityOfService:(unsigned int)arg1 scaled:(BOOL)arg2 storeType:(NSUInteger)arg3 error:(*id)arg4 ;
+(void)requestProxyByStoringImage:(id)arg0 qualityOfService:(unsigned int)arg1 scaled:(BOOL)arg2 storeType:(NSUInteger)arg3 completion:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_URLRepresentation;
-(id)_copyWithSubclass:(Class)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_identifier;
-(id)_initWithURLRepresentation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)retrieveProxiedImageSynchronouslyUsingService:(id)arg0 error:(*id)arg1 ;
-(void)_loadImageDataAndSizeWithHelper:(id)arg0 accessSpecifier:(id)arg1 completion:(id)arg2 ;
-(void)_retrieveImageDataWithReply:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)purgeStoredImageWithCompletion:(id)arg0 ;
-(void)unproxyImageFromService:(id)arg0 reply:(id)arg1 ;


@end


#endif