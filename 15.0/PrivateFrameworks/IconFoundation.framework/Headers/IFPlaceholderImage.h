// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IFPLACEHOLDERIMAGE_H
#define IFPLACEHOLDERIMAGE_H



#import "IFImage.h"

@interface IFPlaceholderImage : IFImage {
    NSUInteger _validationFlags;
}


@property (readonly) IFImage *image; // ivar: _image


-(BOOL)placeholder;
-(CGFloat)scale;
-(NSUInteger)validationFlags;
-(id)initWithImage:(id)arg0 ;
-(id)validationToken;
-(struct CGImage *)CGImage;
-(struct CGSize )minimumSize;
-(struct CGSize )size;
-(void)setPlaceholder:(BOOL)arg0 ;
-(void)setValidationFlags:(NSUInteger)arg0 ;


@end


#endif