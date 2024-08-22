// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMCLIP_H
#define FMCLIP_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface FMClip : NSObject

@property (nonatomic) NSInteger duration; // ivar: _duration
@property (nonatomic) NSInteger fadeInLength; // ivar: _fadeInLength
@property (nonatomic) NSInteger fadeOutLength; // ivar: _fadeOutLength
@property (nonatomic) NSInteger offset; // ivar: _offset
@property (nonatomic) NSInteger position; // ivar: _position
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif