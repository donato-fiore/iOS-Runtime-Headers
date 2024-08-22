// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INKEYIMAGEEXTRACTION_H
#define INKEYIMAGEEXTRACTION_H

@class NSString, NSDictionary;
@protocol INImageStoring, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INImage.h"

@interface INKeyImageExtraction : NSObject <INImageStoring, NSSecureCoding>



@property (nonatomic, setter=_setImageTypeToStore:) NSInteger _imageTypeToStore; // ivar: _imageTypeToStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) INImage *keyImage;
@property (copy, nonatomic) NSDictionary *keyImagesByType; // ivar: _keyImagesByType
@property (copy, nonatomic) NSString *proxyIdentifier; // ivar: _proxyIdentifier
@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) NSUInteger servicePriority;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)canStoreImage:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)retrieveImageSynchronouslyForIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)storeImage:(id)arg0 scaled:(BOOL)arg1 qualityOfService:(unsigned int)arg2 storeType:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)storeImageSynchronously:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)purgeImageWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)retrieveImageWithIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif