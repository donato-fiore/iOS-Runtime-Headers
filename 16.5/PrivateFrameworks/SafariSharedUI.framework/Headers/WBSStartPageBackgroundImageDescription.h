// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSSTARTPAGEBACKGROUNDIMAGEDESCRIPTION_H
#define WBSSTARTPAGEBACKGROUNDIMAGEDESCRIPTION_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface WBSStartPageBackgroundImageDescription : NSObject

@property (readonly, nonatomic) CGFloat luminance; // ivar: _luminance
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url


-(id)initWithURL:(id)arg0 luminance:(CGFloat)arg1 ;


@end


#endif