// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BNIMAGEPROVIDER_H
#define BNIMAGEPROVIDER_H

@class NSURL, NSString, UIImage;
@protocol BNImageProviding;

#import <Foundation/Foundation.h>


@interface BNImageProvider : NSObject <BNImageProviding>

 {
    id *_imageSource;
    NSInteger _imageSourceType;
    NSURL *_bundleURL;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic, getter=isImageProvider) BOOL imageProvider;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)_initWithImageSource:(id)arg0 ofType:(NSInteger)arg1 fromBundle:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImage:(id)arg0 ;
-(id)initWithImageName:(id)arg0 ;
-(id)initWithImageName:(id)arg0 fromBundle:(id)arg1 ;
-(id)initWithSystemImageName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif