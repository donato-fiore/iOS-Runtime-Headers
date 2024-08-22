// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMTRANSIENTPAIREDVIDEO_H
#define CAMTRANSIENTPAIREDVIDEO_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface CAMTransientPairedVideo : NSObject

@property (readonly, nonatomic) NSInteger filterType; // ivar: _filterType
@property (readonly, nonatomic) ? stillDisplayTime; // ivar: _stillDisplayTime
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url


-(id)initWithURL:(id)arg0 stillDisplayTime:(struct ? )arg1 filterType:(NSInteger)arg2 ;


@end


#endif