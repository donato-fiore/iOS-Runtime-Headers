// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SBWFAKEBLURASSET_H
#define _SBWFAKEBLURASSET_H

@class NSURL, UIImage, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface _SBWFakeBlurAsset : NSObject <BSDescriptionProviding>

 {
    NSInteger _actualStyle;
    NSURL *_imageURL;
    UIImage *_image;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif