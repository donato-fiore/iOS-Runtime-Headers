// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INURLIMAGE_H
#define _INURLIMAGE_H

@class NSData, NSURL;


#import "INImage.h"

@interface _INURLImage : INImage {
    NSData *_sandboxExtensionData;
}


@property (readonly, copy, nonatomic) NSURL *imageURL; // ivar: _imageURL


+(BOOL)supportsSecureCoding;
-(BOOL)_isEligibleForProxying;
-(BOOL)_isSupportedForDonation;
-(BOOL)_requiresRetrieval;
-(id)_URLRepresentation;
-(id)_copyWithSubclass:(Class)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_identifier;
-(id)_initWithURLRepresentation:(id)arg0 ;
-(id)_sandboxExtensionData;
-(id)_uri;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImageURL:(id)arg0 ;
-(void)_loadImageDataAndSizeWithHelper:(id)arg0 accessSpecifier:(id)arg1 completion:(id)arg2 ;
-(void)_setSandboxExtensionData:(id)arg0 ;
-(void)_setUri:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif