// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSUISHOWSCREENSHOTUIWITHIMAGESERVICEREQUEST_H
#define SSUISHOWSCREENSHOTUIWITHIMAGESERVICEREQUEST_H

@class UIImage;


#import "SSUIServiceRequest.h"
#import "SSUIServiceOptions.h"

@interface SSUIShowScreenshotUIWithImageServiceRequest : SSUIServiceRequest

@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) SSUIServiceOptions *options; // ivar: _options


+(BOOL)supportsBSXPCSecureCoding;
+(id)entitlement;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif