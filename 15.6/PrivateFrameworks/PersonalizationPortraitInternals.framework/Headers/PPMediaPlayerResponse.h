// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPMEDIAPLAYERRESPONSE_H
#define PPMEDIAPLAYERRESPONSE_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface PPMediaPlayerResponse : NSObject {
    unsigned int _state;
    NSString *_title;
    NSString *_artist;
    NSString *_album;
    NSString *_bundleID;
    NSString *_playerID;
    NSNumber *_storeItemID;
    CGFloat _duration;
}




-(BOOL)isEqualToResponse:(id)arg0 ;


@end


#endif