// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKIMAGEDATA_H
#define CKIMAGEDATA_H

@class NSString, NSData, UIImage, NSURL;

#import <Foundation/Foundation.h>


@interface CKImageData : NSObject

@property (readonly, copy, nonatomic) NSString *MIMEType;
@property (readonly, copy, nonatomic) NSString *UTIType;
@property (nonatomic) NSUInteger count; // ivar: _count
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) *CGImageSource imageSource; // ivar: _imageSource
@property (nonatomic) BOOL initializedProperties; // ivar: _initializedProperties
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (readonly, nonatomic) CGSize ptSize;
@property (nonatomic) CGSize pxSize; // ivar: _pxSize
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsASTC;
+(id)UTITypeForData:(id)arg0 ;
-(id)_defaultDurationsWithMaxCount:(NSUInteger)arg0 ;
-(id)_thumbnailFillToSize:(struct CGSize )arg0 atIndex:(NSUInteger)arg1 ;
-(id)_thumbnailFitToSize:(struct CGSize )arg0 atIndex:(NSUInteger)arg1 ;
-(id)durationsWithMaxCount:(NSUInteger)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)thumbnailAtIndex:(NSUInteger)arg0 fillToSize:(struct CGSize )arg1 maxCount:(NSUInteger)arg2 ;
-(id)thumbnailFillToSize:(struct CGSize )arg0 ;
-(id)thumbnailFillToSizeCropping:(struct CGSize )arg0 ;
-(id)thumbnailFitToSize:(struct CGSize )arg0 ;
-(id)thumbnailsFillToSize:(struct CGSize )arg0 maxCount:(NSUInteger)arg1 ;
-(id)thumbnailsFitToSize:(struct CGSize )arg0 maxCount:(NSUInteger)arg1 ;
-(void)_initializeProperties;
-(void)dealloc;


@end


#endif