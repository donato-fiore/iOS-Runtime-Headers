// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXHOSTVIEWCONTROLLERCONFIGURATION_H
#define _EXHOSTVIEWCONTROLLERCONFIGURATION_H

@class _EXExtensionIdentity, _EXExtensionInstanceIdentifier, NSString;
@protocol NSCopying, _EXExtensionRepresenting, _EXSceneInitializationParameters;

#import <Foundation/Foundation.h>


@interface _EXHostViewControllerConfiguration : NSObject <NSCopying>



@property (nonatomic) BOOL beginHostingImmediately; // ivar: _beginHostingImmediately
@property (retain, nonatomic) NSObject<_EXExtensionRepresenting> *extension; // ivar: _extension
@property (retain, nonatomic) _EXExtensionIdentity *extensionIdentity; // ivar: _extensionIdentity
@property (retain, nonatomic) NSObject<_EXSceneInitializationParameters> *initializationParameters; // ivar: _initializationParameters
@property (retain, nonatomic) _EXExtensionInstanceIdentifier *instanceIdentifier; // ivar: _instanceIdentifier
@property (nonatomic) BOOL retryOnHostingFailure; // ivar: _retryOnHostingFailure
@property (retain, nonatomic) NSString *role; // ivar: _role
@property (retain, nonatomic) NSString *sceneIdentifier;
@property (nonatomic) NSInteger sizeBridgingOptions; // ivar: _sizeBridgingOptions


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithExtension:(id)arg0 ;
-(id)initWithExtension:(id)arg0 role:(id)arg1 ;
-(id)initWithExtensionIdentity:(id)arg0 ;


@end


#endif