// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WKAPPHIGHLIGHT_H
#define _WKAPPHIGHLIGHT_H

@class NSData, UIImage, NSString;

#import <Foundation/Foundation.h>


@interface _WKAppHighlight : NSObject {
    RetainPtr<NSData> _highlight;
    RetainPtr<NSString> _text;
    RetainPtr<UIImage> _image;
}


@property (readonly, nonatomic) NSData *highlight;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSString *text;


-(id)initWithHighlight:(id)arg0 text:(id)arg1 image:(id)arg2 ;


@end


#endif