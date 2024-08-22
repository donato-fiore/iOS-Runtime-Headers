// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INDATAIMAGE_H
#define _INDATAIMAGE_H

@class NSUUID, NSData;


#import "INImage.h"

@interface _INDataImage : INImage {
    NSUUID *_sha256HashUUID;
}


@property (readonly, copy, nonatomic) NSData *imageData; // ivar: _imageData


+(BOOL)supportsSecureCoding;
-(BOOL)_isEligibleForProxying;
-(BOOL)_requiresRetrieval;
-(BOOL)isEqual:(id)arg0 ;
-(id)_copyWithSubclass:(Class)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_identifier;
-(id)_sha256HashUUID;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImageData:(id)arg0 ;
-(void)_loadImageDataAndSizeWithHelper:(id)arg0 accessSpecifier:(id)arg1 completion:(id)arg2 ;
-(void)_retrieveImageDataWithReply:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif