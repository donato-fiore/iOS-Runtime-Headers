// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIFAKEBLURASSET_H
#define PBUIFAKEBLURASSET_H

@class NSURL, UIImage, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface PBUIFakeBlurAsset : NSObject <BSDescriptionProviding>

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