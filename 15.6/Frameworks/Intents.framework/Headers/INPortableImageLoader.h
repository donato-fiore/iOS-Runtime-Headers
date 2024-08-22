// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INPORTABLEIMAGELOADER_H
#define INPORTABLEIMAGELOADER_H

@class NSString;
@protocol INImageLoading, NSSecureCoding, INPortableImageLoaderHelping;

#import <Foundation/Foundation.h>


@interface INPortableImageLoader : NSObject <INImageLoading, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSObject<INPortableImageLoaderHelping> *helper; // ivar: _helper
@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) NSUInteger servicePriority;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)canLoadImageDataForImage:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadDataImageFromImage:(id)arg0 usingPortableImageLoader:(id)arg1 scaledSize:(struct ? )arg2 completion:(id)arg3 ;
-(void)loadImageDataFromImage:(id)arg0 accessSpecifier:(id)arg1 completion:(id)arg2 ;


@end


#endif