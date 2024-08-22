// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLURLTEXTURE_H
#define MDLURLTEXTURE_H

@class NSURL;


#import "MDLTexture.h"

@interface MDLURLTexture : MDLTexture {
    NSURL *_url;
}


@property (copy, nonatomic) NSURL *URL;


-(id)initWithURL:(id)arg0 name:(id)arg1 ;


@end


#endif