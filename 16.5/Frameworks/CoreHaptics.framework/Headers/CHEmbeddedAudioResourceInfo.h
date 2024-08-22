// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHEMBEDDEDAUDIORESOURCEINFO_H
#define CHEMBEDDEDAUDIORESOURCEINFO_H

@class NSDictionary, NSURL;

#import <Foundation/Foundation.h>


@interface CHEmbeddedAudioResourceInfo : NSObject

@property (readonly) NSDictionary *options; // ivar: _options
@property (readonly) NSURL *url; // ivar: _url


-(id)initWithURL:(id)arg0 options:(id)arg1 ;


@end


#endif