// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFACTIONDRAWERIMAGE_H
#define WFACTIONDRAWERIMAGE_H

@class WFImage;

#import <Foundation/Foundation.h>


@interface WFActionDrawerImage : NSObject

@property (readonly, nonatomic) WFImage *image; // ivar: _image
@property (readonly, nonatomic) BOOL shouldAspectFill; // ivar: _shouldAspectFill


-(id)initWithImage:(id)arg0 shouldAspectFill:(BOOL)arg1 ;


@end


#endif