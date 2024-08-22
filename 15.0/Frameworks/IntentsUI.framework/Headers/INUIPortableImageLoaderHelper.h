// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INUIPORTABLEIMAGELOADERHELPER_H
#define INUIPORTABLEIMAGELOADERHELPER_H

@class NSString, UITraitCollection;
@protocol INPortableImageLoaderHelping;

#import <Foundation/Foundation.h>


@interface INUIPortableImageLoaderHelper : NSObject <INPortableImageLoaderHelping>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadImageDataFromBundle:(id)arg0 withImageName:(id)arg1 accessSpecifier:(id)arg2 completion:(id)arg3 ;
-(void)loadImageSizeFromData:(id)arg0 completion:(id)arg1 ;


@end


#endif