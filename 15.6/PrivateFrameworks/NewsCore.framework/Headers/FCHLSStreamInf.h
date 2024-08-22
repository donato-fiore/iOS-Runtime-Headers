// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCHLSSTREAMINF_H
#define FCHLSSTREAMINF_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface FCHLSStreamInf : NSObject {
    NSURL *_url;
    NSUInteger _bandwidth;
    NSUInteger _averageBandwidth;
    NSString *_codecs;
    NSString *_audio;
}




-(id)description;


@end


#endif