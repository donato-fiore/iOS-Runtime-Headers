// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATINTEDIMAGE_H
#define CATINTEDIMAGE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CATintedImage : NSObject <NSSecureCoding>

 {
    unsigned int _copy_flags;
}


@property (retain) *CGImage image; // ivar: _image
@property (retain) *CGColor tint; // ivar: _tint


+(BOOL)supportsSecureCoding;
+(id)tintedImageWithCABackingStore:(struct CABackingStore *)arg0 ;
+(id)tintedImageWithCGImage:(struct CGImage *)arg0 tint:(struct CGColor *)arg1 ;
+(id)tintedImageWithCGImage:(struct CGImage *)arg0 tint:(struct CGColor *)arg1 copyFlags:(unsigned int)arg2 ;
+(void)CAMLParserStartElement:(id)arg0 ;
-(*void)CA_copyRenderValue;
-(id)CAMLTypeForKey:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)CAMLParser:(id)arg0 setValue:(id)arg1 forKey:(id)arg2 ;
-(void)CA_prepareRenderValue;
-(void)dealloc;
-(void)encodeWithCAMLWriter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif