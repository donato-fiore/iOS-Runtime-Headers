// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKIMAGEDATA_H
#define CKIMAGEDATA_H

@class NSString, NSData, UIImage, NSURL;

#import <Foundation/Foundation.h>


@interface CKImageData : NSObject {
    *CGImageSource _imageSource;
    NSUInteger _count;
    NSInteger _orientation;
    CGSize _pxSize;
    BOOL _initializedProperties;
}


@property (readonly, copy, nonatomic) NSString *MIMEType;
@property (readonly, copy, nonatomic) NSString *UTIType;
@property (readonly, nonatomic) NSUInteger count;
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) NSInteger orientation;
@property (readonly, nonatomic) CGSize ptSize;
@property (readonly, nonatomic) CGSize pxSize;
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