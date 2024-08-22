// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFCOMPOSEATTACHMENTINFO_H
#define MFCOMPOSEATTACHMENTINFO_H

@class MSAttachmentInfo, NSString;



@interface MFComposeAttachmentInfo : MSAttachmentInfo

@property (readonly, copy, nonatomic) NSString *className; // ivar: _className
@property (readonly, nonatomic) BOOL isBasicImage; // ivar: _isBasicImage
@property (readonly, nonatomic) BOOL isDisplayableImage; // ivar: _isDisplayableImage


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 filename:(id)arg1 isBasicImage:(BOOL)arg2 isDisplayableImage:(BOOL)arg3 className:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif