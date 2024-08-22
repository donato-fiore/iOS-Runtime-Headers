// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFATTACHMENTDRAGPREVIEWINFO_H
#define MFATTACHMENTDRAGPREVIEWINFO_H

@class UIImage;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MFAttachmentDragPreviewInfo : NSObject <NSSecureCoding>



@property (nonatomic) CGPoint center; // ivar: _center
@property (nonatomic) CGSize displaySize; // ivar: _displaySize
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) BOOL isInlineImage; // ivar: _isInlineImage


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)targetedDragPreviewInContainer:(id)arg0 centerOffset:(struct CGPoint )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif