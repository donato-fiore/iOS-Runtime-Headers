// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFATTACHMENTIMAGEGENERATOR_H
#define MFATTACHMENTIMAGEGENERATOR_H

@class UIView, NSString, UIImage;



@interface MFAttachmentImageGenerator : UIView {
    CGSize _textSize;
    NSString *_displayString;
    UIImage *_image;
    CGFloat _maxImageHeight;
}




+(CGFloat)defaultHeight;
+(id)imageForAttachment:(id)arg0 ;
+(id)pngDataForAttachment:(id)arg0 ;
+(struct CGRect )imageRectForAttachment:(id)arg0 ;
-(id)image;
-(id)initWithAttachment:(id)arg0 ;
-(id)pngData;
-(struct CGRect )imageRect;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif