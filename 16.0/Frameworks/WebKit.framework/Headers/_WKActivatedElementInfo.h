// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WKACTIVATEDELEMENTINFO_H
#define _WKACTIVATEDELEMENTINFO_H

@class NSString, NSURL, UIImage, NSDictionary;

#import <Foundation/Foundation.h>


@interface _WKActivatedElementInfo : NSObject {
    RetainPtr<NSURL> _URL;
    RetainPtr<NSURL> _imageURL;
    RetainPtr<NSString> _title;
    IntPoint _interactionLocation;
    RetainPtr<NSString> _ID;
    RefPtr<WebKit::ShareableBitmap, WTF::RawPtrTraits<WebKit::ShareableBitmap>, WTF::DefaultRefDerefTraits<WebKit::ShareableBitmap>> _image;
    RetainPtr<NSString> _imageMIMEType;
    RetainPtr<UIImage> _cocoaImage;
    RetainPtr<NSDictionary> _userInfo;
    BOOL _animatedImage;
    BOOL _isImage;
}


@property (readonly, nonatomic) NSString *ID;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) IntPoint _interactionLocation;
@property (readonly, nonatomic) BOOL _isImage;
@property (readonly, nonatomic) CGRect boundingRect; // ivar: _boundingRect
@property (readonly, copy, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSString *imageMIMEType;
@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) BOOL isAnimatedImage;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSDictionary *userInfo;


+(id)activatedElementInfoWithInteractionInformationAtPosition:(*void)arg0 userInfo:(id)arg1 ;
-(id)_initWithInteractionInformationAtPosition:(*void)arg0 userInfo:(id)arg1 ;
-(id)_initWithType:(NSInteger)arg0 URL:(id)arg1 imageURL:(id)arg2 location:(struct IntPoint *)arg3 title:(id)arg4 ID:(id)arg5 rect:(struct CGRect )arg6 image:(*void)arg7 imageMIMEType:(id)arg8 ;
-(id)_initWithType:(NSInteger)arg0 URL:(id)arg1 imageURL:(id)arg2 location:(struct IntPoint *)arg3 title:(id)arg4 ID:(id)arg5 rect:(struct CGRect )arg6 image:(*void)arg7 imageMIMEType:(id)arg8 userInfo:(id)arg9 ;


@end


#endif