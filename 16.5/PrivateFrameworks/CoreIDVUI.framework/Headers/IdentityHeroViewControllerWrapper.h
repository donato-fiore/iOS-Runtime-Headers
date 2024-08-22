// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDENTITYHEROVIEWCONTROLLERWRAPPER_H
#define IDENTITYHEROVIEWCONTROLLERWRAPPER_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface IdentityHeroViewControllerWrapper : NSObject {
    NSData *_imageData;
    NSString *_title;
    NSString *_subTitle;
    NSString *_primaryButtonTitle;
    NSString *_secondaryButtonTitle;
}




// -(id)identityHeroViewController:(id)arg0 secondaryButtonClicked:(unk)arg1  ;
-(id)initWithImageData:(id)arg0 title:(id)arg1 subtitle:(id)arg2 primaryButtonTitle:(id)arg3 secondaryButtonTitle:(id)arg4 ;


@end


#endif